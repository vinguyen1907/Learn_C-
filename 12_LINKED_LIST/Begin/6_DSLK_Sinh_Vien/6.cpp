#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

struct Date
{
    int day, month, year;
};

struct Pupil
{
    string name;
    string mssv;
    Date date;
    float mark;
};

struct NODE
{
    Pupil data;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

NODE* Create_NODE(Pupil pp)
{
    NODE *p = new NODE;
    p->data = pp;
    p->pNext = NULL;
    return p;
}

void Create_LIST(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

//=========== ĐỌC VÀ XUẤT FILE RA MÀN HÌNH CONSOLE ===========
//Thêm NODE vào cuối DSLK
void Add_Into_Last(LIST &l, NODE *p)    
{
    if (l.pHead == NULL && l.pTail == NULL)
        l.pHead = l.pTail = p;
    else 
    {
        l.pTail->pNext = p;
        l.pTail = p;
        l.pTail->pNext = NULL;  //Nhớ trỏ đến NULL, nếu không chạy vòng for sẽ lỗi
    }
}

//Đọc ngày tháng năm => để đọc thông tin sinh viên gọi lại
void Input_Date(ifstream &input, Date &d)
{
    input >>d.day;
    input.seekg(1, ios::cur);
    input >>d.month;
    input.seekg(1, ios::cur);
    input >>d.year;
    input.seekg(1, ios::cur);
}

//Đọc thông tin 1 sinh viên
NODE* Input_Information(ifstream &input)
{
    NODE *p = new NODE;
    getline(input, p->data.name, ',');
    input.seekg(1, ios::cur);
    getline(input, p->data.mssv, ',');
    input.seekg(1, ios::cur);
    Input_Date(input, p->data.date);
    input >>p->data.mark;
    string temp;
    getline(input, temp);
    return p;
}

//Đọc thông tin LIST sinh viên, tạo NODE và thêm NODE vào cuối danh sách
void Input_LIST(ifstream& input, LIST& l)
{
    while (!input.eof())
    {
        NODE* p = Input_Information(input);
        Add_Into_Last(l, p);
    }
}

//Xuất thông tin 1 sinh viên
void Output_Information(Pupil pp)
{
    cout << "Ho va ten: " << pp.name << endl;
    cout << "Ma so sinh vien: " << pp.mssv << endl;
    cout << "Ngay thang nam sinh: " << pp.date.day << "/" << pp.date.month << "/" << pp.date.year << endl;
    cout << "Diem trung binh la: " << pp.mark << endl << endl;
}

//Xuất thông tin LIST sinh viên ra console
void Output_LIST_Into_Console(LIST l)
{
    for (NODE* k = l.pHead; k != NULL; k = k->pNext)
        Output_Information(k->data);
}


//=========== BÀI TOÁN: IN DANH SÁCH VÀO FILE OUTPUT1.TXT THEO THỨ TỰ TĂNG DẦN ĐIỂM TRUNG BÌNH ===========
//Xuất thông tin 1 sinh viên vào file
void Output_LIST_Into_File(ofstream &output, Pupil pp)
{
        output <<pp.name <<", ";
        output << pp.mssv <<", " ;
        output <<pp.date.day <<"/" <<pp.date.month <<"/" <<pp.date.year <<", ";
        output <<pp.mark <<endl;
}

//Hoán vị   ## Vì KHÔNG THỂ HOÁN VỊ CON TRỎ nên ta hoán vị data trong con trỏ
void Hoan_Vi(Pupil &x, Pupil &y)
{
    Pupil temp = x;
    x = y;
    y = temp;
}

//Sắp xếp tăng dần theo điểm và xuất ra file
void Arrange( LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        for (NODE *h = k->pNext; h != NULL; h = h->pNext)
            if (k->data.mark > h->data.mark)
                Hoan_Vi(k->data, h->data);

    ofstream output("D:\\CODE\\INPUT\\12_LINKED_LIST\\Begin\\6\\Output1.txt");
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        Output_LIST_Into_File(output, k->data);
    output.close();
}

//=========== BÀI TOÁN: TÌM NHỮNG SINH VIÊN CÓ ĐIỂM CAO NHẤT ===========
void Find_Best_Pupil(LIST l)
{
    ofstream output("D:\\CODE\\INPUT\\12_LINKED_LIST\\Begin\\6\\DIEMMAX.txt");
    float max = 0;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (k->data.mark > max)
            max = k->data.mark;

    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (k->data.mark == max)
            Output_LIST_Into_File(output, k->data);
    output.close();
}

//=========== BÀI TOÁN: TÌM TÌM KIẾM THÔNG TIN SINH VIÊN DỰA VÀO TÊN(không có họ) ===========
string Get_Name(string fullname)
{
    int i;
    for (i = fullname.length()-1; i >= 0; i--) 
        if (fullname[i] == ' ')
            break;
    return fullname.substr(i+1);
}

void Find_Information_By_Name(LIST l)
{
    string name;
    cout <<"Tim thong tin sinh vien co ten la: ";
    getline(cin, name);
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if(_stricmp(name.c_str(), Get_Name(k->data.name).c_str()) == 0)
        {
            cout <<k->data.name <<", ";
            cout <<k->data.mssv <<", " ;
            cout <<k->data.date.day <<"/" <<k->data.date.month <<"/" <<k->data.date.year <<", ";
            cout <<k->data.mark <<endl;
        }
}

//=========== BÀI TOÁN: TÌM TÌM KIẾM THÔNG TIN SINH VIÊN DỰA VÀO MSSV ===========
void Find_Information_By_MSSV(LIST l)
{
    string mssv;
    cout <<"Tim thong tin sinh vien co MSSV la: ";
    getline(cin, mssv);
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if(_stricmp(mssv.c_str(), k->data.mssv.c_str()) == 0)
        {
            cout <<k->data.name <<", ";
            cout <<k->data.mssv <<", " ;
            cout <<k->data.date.day <<"/" <<k->data.date.month <<"/" <<k->data.date.year <<", ";
            cout <<k->data.mark <<endl;
        }
}

int main()
{
    LIST l;
    Create_LIST(l);
    Pupil pp;
    ifstream input("D:\\CODE\\INPUT\\12_LINKED_LIST\\Begin\\6\\Input.txt");
    Input_LIST(input, l);
    Output_LIST_Into_Console(l);

    Arrange(l); //Sắp xếp và xuất danh sách ra file
    Find_Best_Pupil(l); //Tìm SV cao điểm nhất và xuất ra file
    Find_Information_By_Name(l);
    //Find_Information_By_MSSV(l);

	input.close();
	cout<<endl <<"Complete!!";
	return 0;
}