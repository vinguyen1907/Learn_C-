#include <iostream>
#include <math.h>

using namespace std;

//Bài toán: Xóa NODE đầu và NODE cuối

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
    if (l.pHead == NULL && l.pTail == NULL)
        l.pHead = l.pTail = p;
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void Add_NODE_p_Before_NODE_q(LIST &l, NODE *p)
{
    int x;
    cout <<"Nhap gia tri NODE q:";
    cin >>x;
    NODE *q = Create_NODE(x);
    NODE *b = new NODE;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
    {
        if (k->data == q->data)
        {
            NODE *h = Create_NODE(p->data);
            h->pNext = k;
            b->pNext = h;
        }
        b = k;
    }
}

void Delete_Head_NODE(LIST &l)
{
    if (l.pHead == NULL)
        return;
    if (l.pHead->pNext == NULL)
    {
        l.pHead = l.pTail = NULL;
    }
    else 
    {
        NODE *p = l.pHead;
        l.pHead = l.pHead->pNext;
        delete p;
    }
}

void Delete_Tail_NODE(LIST &l)
{
    if (l.pHead == NULL)
        return;
    if (l.pHead->pNext == NULL)
        l.pHead = l.pTail = NULL;
    else 
    {
        for ( NODE *k = l.pHead; k != NULL; k = k->pNext)
        {
            if ( k->pNext == l.pTail )
            {
                l.pTail = k;
                delete l.pTail->pNext;
                l.pTail->pNext = NULL;
            }
        }
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
        cout <<"\n3. Them NODE p truoc NODE q";
        cout <<"\n4. Xoa NODE dau";
        cout <<"\n5. Xoa NODE cuoi";
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
            Add_NODE_p_Before_NODE_q(l, p);
        }
        else if ( n == 4 )
            Delete_Head_NODE(l);
        else if ( n == 5 )
            Delete_Tail_NODE(l);
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
