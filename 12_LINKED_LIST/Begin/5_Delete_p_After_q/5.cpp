#include <iostream>
#include <math.h>

using namespace std;

//Bài toán: Xóa NODE sau NODE q

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

void Add_NODE_Into_First(LIST &l, NODE *p)
{
    if (l.pHead == NULL)    //Danh sách đang rỗng
        l.pHead = l.pTail = p;
    else 
    {
        p->pNext = l.pHead; //Cho con trỏ của node cần thêm(p) liên kết với node đầu pHead
        l.pHead = p;    //Cập nhật lại node đầu là p
    }
}

void Add_NODE_Into_Last(LIST &l, NODE *p)
{
    if (l.pHead == NULL)    //Danh sách đang rỗng
        l.pHead = l.pTail = p;
    else 
    {
        l.pTail->pNext = p; //Cho con trỏ của node cần thêm(p) liên kết với node cuối pTail
        l.pTail = p;    //Cập nhật lại node cuối là p
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

void Add_NODE_p_After_NODE_q(LIST &l, NODE *p)
{
    int x;
    cout <<"Nhap NODE q:";
    cin >>x;
    NODE *q = Create_NODE(x);
    if (q->data == l.pHead->data && l.pHead->pNext == NULL )
        Add_NODE_Into_Last(l, p);
    for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
        if ( k->data == q->data )   //=>k đang là q
        {
            NODE *h = Create_NODE(p->data); //Tạo NODE h là bản sao của NODE p
            NODE *g = k->pNext;
            h->pNext = g;
            k->pNext = h;
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

void Delete_NODE_p_Before_NODE_q(LIST &l)
{
    int x;
    cout <<"Nhap gia tri NODE q: ";
    cin >>x;
    //NODE *q = Create_NODE(x);
    NODE *pre = new NODE;
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
    {
        if (k->pNext->data == x)
        {
            pre->pNext = k->pNext;
            delete k;
            return;
        }
        pre = k;
    }
}     

void Delete_NODE_p_After_NODE_q(LIST &l)
{
    int x;
    cout <<"Nhap NODE q: ";
    cin >>x;
    NODE *q = Create_NODE(x);
    for ( NODE *k = l.pHead; k != NULL; k = k->pNext )
        if ( k->data == q->data )
        {
            NODE *g = k->pNext;
            k->pNext = g->pNext;
            delete g;
        }
}

void Delete_NODE(LIST &l)
{
    int x;
    cout <<"Xoa NODE co gia tri = ";
    cin >>x;
    if (l.pHead->data == x)
        Delete_Head_NODE(l);
    else if (l.pHead->data == x)
        Delete_Tail_NODE(l);
    else
    {
        NODE *pre = new NODE;
        for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        {
            if (k->data == x)
            {
                pre->pNext = k->pNext;
                delete k;
                return;
            }
            pre = k;
        }
    }
}

void Delete_LIST(LIST &l)
{
    NODE *k;
    while (l.pHead != NULL)
    {
        k = l.pHead;
        l.pHead = l.pHead->pNext;
        delete k;
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
        cout <<"\n1. Them NODE vao DSLK";
        cout <<"\n2. Xuat Danh sach lien ket";
        cout <<"\n3. Them NODE vao dau danh sach";
        cout <<"\n4. Them NODE vao cuoi danh sach";
        cout <<"\n5. Them NODE p truoc NODE q";
        cout <<"\n6. Them NODE p sau NODE q";
        cout <<"\n7. Xoa NODE dau";
        cout <<"\n8. Xoa NODE cuoi";
        cout <<"\n9. Xoa NODE sau NODE q";
        cout <<"\n10. Xoa NODE truoc NODE q";
        cout <<"\n11. Xoa NODE bat ki";
        cout <<"\n12. Xoa DSLK";
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
            cout <<"Nhap gia tri NODE muon them:";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_Into_First(l, p);
        }
        else if ( n == 4 )
        {
            cout <<"Nhap gia tri NODE muon them:";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_Into_Last(l, p);
        }
        else if ( n == 5 )
        {
            cout <<"Nhap gia tri NODE p muon them: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_p_Before_NODE_q(l, p);
        }
        else if ( n == 6 )
        {
            cout <<"Nhap gia tri NODE p muon them: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Add_NODE_p_After_NODE_q(l, p);
        }
        else if ( n == 7 )
            Delete_Head_NODE(l);
        else if ( n == 8 )
            Delete_Tail_NODE(l);
        else if ( n == 9 )
            Delete_NODE_p_After_NODE_q(l);
        else if ( n == 10 )
            Delete_NODE_p_Before_NODE_q(l);
        else if ( n == 11 )
            Delete_NODE(l);
        else if ( n == 12 )
            Delete_LIST(l);
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