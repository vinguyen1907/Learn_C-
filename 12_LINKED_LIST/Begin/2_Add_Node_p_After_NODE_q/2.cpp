#include <iostream>
#include <math.h>
using namespace std;

//Bài toán: Thêm NODE p sau NODE q

struct NODE
{
    int data;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

void Create_List(LIST &l)
{
    l.pHead = NULL; 
    l.pTail = NULL;
}

NODE *Create_NODE(int x)
{
    NODE *p = new NODE;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void Add_NODE_Into_Last(LIST &l, NODE *p)
{
    if ( l.pHead == NULL && l.pTail == NULL )
        l.pHead = l.pTail = p;
    else 
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Add_NODE_p_after_q(LIST &l, NODE *p)
{
    int x;
    cout <<"Nhap NODE q:";
    cin >>x;
    NODE *q = Create_NODE(x);
    //Nếu danh sách chỉ có 1 phân tử
    if (q->data == l.pHead->data && l.pHead->pNext == NULL )
        Add_NODE_Into_Last(l, p);
    else
        for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
            if ( k->data == q->data )   //=>k đang là q
            // {
            //     NODE *g = k->pNext; //Tạo NODE g là NODE nằm sau NODE q
            //     p->pNext = g; //Tạo mối liên kết NODE p với g(sau q)
            //     k->pNext = p;   //Tạo mối liên kết q với p
            // }
            //LỖI: Với DSLK 1 2 3 2 5, muốn thêm 69 vào sau 2 sẽ lỗi thành 1 2 69 5
            // Vì: NODE p tạo tại địa chỉ x, khi đến vị trí 2 lần thứ hai vẫn lấy địa chỉ x trỏ vào g(là 5) nên sẽ mất liên kết ở vị trí 3 va 2
            // => GIẢI QUYẾT NHƯ SAU:
            {
                NODE *h = Create_NODE(p->data); //Tạo NODE h là bản sao của NODE p
                NODE *g = k->pNext;
                h->pNext = g;
                k->pNext = h;
            }
}

void Output(LIST l)
{
    for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
        cout <<k->data <<"  ";
}

void MENU(LIST &l)
{
    int n, x;
    while (true)
    {
        system("cls");
        cout <<"================== MENU ==================";
        cout <<"\n1. Nhap NODE vao DSLK";
        cout <<"\n2. Xuat Danh sach lien ket";
        cout <<"\n3. Them NODE p sau NODE q";
        cout <<"\n0. Thoat";
        cout <<"\n================ LUA CHON ================";
        cout <<"\nNhap lua chon cua ban: ";
        cin >>n;
        if ( (n < 0) && (n > 3) )
            cout <<"Lua chon ko hop le! Nhap lai";
        else if ( n == 1 )
        {
            cout <<"Nhap gia tri: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_Into_Last(l, p);
        }
        else if ( n == 2 )
        {
            Output(l);
            system("pause");
        }
        else if ( n == 3 )
        {
            cout <<"Nhap gia tri NODE p muon them: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_p_after_q(l, p);
        }
        else 
            break;
    }
}

int main()
{
    LIST l;
    Create_List(l);
    MENU(l);
	
	cout<<endl <<"Complete!!";
	return 0;
}
