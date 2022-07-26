#include <iostream>
#include <math.h>
using namespace std;
//Bài toán: Nhạp danh sách liên kết các số nguyên. Tìm số lớn nhất

//================ KHAI BÁO DSLK CÁC SỐ NGUYÊN ================

//Khai báo cấu trúc 1 cái node
struct NODE 
{
    int data;       //Dữ liệu của node
    NODE *pNext;    //Con trỏ dùng để liên kết các node với nhau
};

//Khai báo cấu trúc DSLK
struct LIST
{
    NODE *pHead;    //Con trỏ Node quản lí đầu danh sách
    NODE *pTail;    //Con trỏ Node quản lí cuối danh sách
};

//================ KHỞi TẠO DSLK CÁC SỐ NGUYÊN ================
void Khoi_tao(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

//Khởi tạo 1 cái Node
NODE *Khoi_tao_NODE(int x)
{
    NODE *p = new NODE; //Cấp phát vùng nhớ cho NODE p
    p->data = x;
    p->pNext = NULL;
    return p;
}

//Hàm thêm NODE vào đầu danh sách liên kết
void Them_NODE_Dau(LIST &l, NODE *p)
{
    if (l.pHead == NULL)    //Danh sách đang rỗng
        l.pHead = l.pTail = p;
    else 
    {
        p->pNext = l.pHead; //Cho con trỏ của node cần thêm(p) liên kết với node đầu pHead
        l.pHead = p;        //Cập nhật lại node đầu là p
    }
}

//Hàm thêm NODE vào cuối danh sách liên kết
void Them_NODE_Cuoi(LIST &l, NODE *p)
{
    if (l.pHead == NULL)    //Danh sách đang rỗng
        l.pHead = l.pTail = p;
    else 
    {
        p->pNext = l.pTail; //Cho con trỏ của node cần thêm(p) liên kết với node cuối pTail
        l.pHead = p;    //Cập nhật lại node cuối là p
    }
}

//Tìm max
int Find_Max(LIST l)
{
    int max = 0;
    for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
        if ( k->data > max )
            max = k->data;
    return max;
}

int main()
{
    LIST l;
    Khoi_tao(l);
    int n, x;
    cout <<"Nhap so phan tu cua danh sach: ";
    cin >>n;
    for ( int i = 1; i <= n; i++ )
    {
        cout <<"Nhap gia tri: ";
        cin >>x;
        NODE *p = Khoi_tao_NODE(x);
        Them_NODE_Dau(l, p);
    }

    for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
        cout <<k->data <<"  ";
	cout <<"\nLon nhat la: " <<Find_Max(l);

	cout<<endl <<"Complete!!";
	return 0;
}
