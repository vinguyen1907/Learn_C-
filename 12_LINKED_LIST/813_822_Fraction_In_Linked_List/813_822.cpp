#include <iostream>
#include <fstream>
using namespace std;

struct Fraction
{
    int tu, mau;
};

struct NODE
{
    Fraction data;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

NODE* Create_NODE(Fraction Fr)
{
    NODE *p = new NODE;
    p->data = Fr;
    p->pNext = NULL;
    return p;
}

void Create_LIST(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

void Add_NODE_Into_Last(LIST &l, NODE *p)
{
    if (l.pHead == NULL && l.pTail == NULL)
        l.pHead = l.pTail = p;
    else 
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Input_From_File_and_Create_LIST(ifstream &input, LIST &l)
{
    Fraction Fr;
    while (!input.eof())
    {
        input >>Fr.tu;
        input >>Fr.mau;
        NODE *p = Create_NODE(Fr);
        Add_NODE_Into_Last(l, p);
    }
}

// void Output_1_Fraction(Fraction Fr)
// {
//     cout <<Fr.tu <<"/" <<Fr.mau <<endl;
// }

void Output_LIST_Into_Console(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        cout <<k->data.tu <<"/" <<k->data.mau <<endl;
}

//813
void Count_Positive_Fraction(LIST l)
{
    int count = 0;
    for (NODE *k = l.pHead; k != NULL; k=k->pNext)
        if (k->data.tu * k->data.mau > 0)
            count ++;
    cout <<"813. So luong phan so duong la: " <<count <<endl;
}

//815
void Find_First_Positive_Fraction(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k=k->pNext)
        if (k->data.tu * k->data.mau > 0)
        {
            cout <<"815. Phan so duong dau tien la: " <<k->data.tu <<"/" <<k->data.mau <<endl;
            break;
        }
}

//816
void Find_Last_Positive_Fraction(LIST l)
{
    Fraction save;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (k->data.tu * k->data.mau > 0)
            save = k->data;
    cout <<"816. Phan so duong cuoi cung la: " <<save.tu <<"/" <<save.mau <<endl;
}

//817
void Check_All_Positive(LIST l)
{
    bool flag = 1;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (k->data.tu * k->data.mau < 0)
            flag = 0;
    if (flag == 0)
        cout <<"817. Ko phai DSLK toan duong" <<endl;
    else
        cout <<"817. DSLK toan duong" <<endl;
}
//819
float Value_Of_Fraction(Fraction Fr)
{
    return (float)Fr.tu / Fr.mau;
}

void Find_Max_Fraction(LIST l)
{
    int max = - 99999999;
    Fraction save;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (Value_Of_Fraction(k->data) >max)
        {
            max = Value_Of_Fraction(k->data);
            save = k->data;
        }
    cout <<"819. Phan so lon nhat la: " <<save.tu <<"/" <<save.mau <<endl;
}

//821
void Exchange_Position(Fraction &a, Fraction &b)
{
    Fraction temp = a;
    a = b;
    b = temp;
}

void Arrange_Ascending(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        for (NODE *h = k->pNext; h != NULL; h = h->pNext)
            if (Value_Of_Fraction(k->data) > Value_Of_Fraction(h->data))
                Exchange_Position(k->data, h->data);

    cout <<"821. DSLK sau khi sap xep: ";
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        cout <<k->data.tu <<"/" <<k->data.mau <<"  ";
    cout <<endl;
}

//822
void Arrange_Ascending_Positive_Fraction(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        for (NODE *h = k->pNext; h != NULL; h = h->pNext)
            if (Value_Of_Fraction(k->data) > Value_Of_Fraction(h->data) && Value_Of_Fraction(h->data) > 0)
                Exchange_Position(k->data, h->data);

    cout <<"822. Danh sach lien ket sau khi sx phan so duong: ";
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        cout <<k->data.tu <<"/" <<k->data.mau <<"  ";
    cout <<endl;
}

int main()
{
    LIST l;
    Create_LIST(l);
    ifstream input("D:\\CODE\\INPUT\\12_LINKED_LIST\\813-822\\Input.txt");
    Input_From_File_and_Create_LIST(input, l);
    Output_LIST_Into_Console(l);

    Count_Positive_Fraction(l);
    Find_First_Positive_Fraction(l);
    Find_Last_Positive_Fraction(l);
    Check_All_Positive(l);
    Find_Max_Fraction(l);
    //Arrange_Ascending(l);
    Arrange_Ascending_Positive_Fraction(l);

	input.close();
	cout<<endl <<"Complete!!";
	return 0;
}
