#include <iostream>
#include <math.h>
using namespace std;

struct NODE
{
    int data;
    NODE *pNext;
};

struct STACK
{
    NODE *pTop;
    //Stack chỉ cần quản lí bằng 1 con trỏ nằm trên(như chồng sách)
};

NODE* Create_NODE(int x)
{
    NODE *p = new NODE;
    if (p == NULL)
    {
        cout <<"Khong du bo nho!!";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}

void Create_STACK(STACK &s)
{
    s.pTop = NULL;
}

// ===== CÁC THAO TÁC VỚI STACK ======
// 1. IsEmpty: kiểm tra STACK có rỗng không
// 2. Push: Thêm 1 đối tượng vào đầu STACK - cơ chế LIFO
// 3. Pop: Lấy phần tử đầu STACK, trả về giá trị của phần tử đó và hủy nó đi
// 4. Top: xem thông tin của phần tử đầu STACK, không xóa

bool IsEmpty(STACK s)
{
    if (s.pTop == NULL)
        return true;
    return false;
}

void Push(STACK &s, NODE *p)
{
    //Nếu danh sách đang rỗng
    if (IsEmpty(s))
        s.pTop = p;
    else //Nếu danh sách có sẵn thì thêm vào đầu
    {
        p->pNext = s.pTop;
        s.pTop = p;
    }
}

void Top(STACK &s, int &x)  //lấy phần tử đầu trả về cho x, xóa phần tử đầu
{
    if (IsEmpty(s))
        return;
    x = s.pTop->data;
}

void Pop(STACK &s, int &x)  //lấy phần tử đầu trả về cho x
{
    x = s.pTop->data;
    NODE *p = s.pTop;
    s.pTop = s.pTop->pNext;
    delete p;
}

void MENU(STACK &s)
{
    int choice, x;
    while (true)
    {
        system("cls");
        cout <<"=================== MENU ===================";
        cout <<"\n1. Them NODE vao STACK ";
        cout <<"\n2. Xuat danh sach STACK va Xoa(Top) ";
        cout <<"\n3. Xem vi tri dau STACK, ko xoa(Pop)";
        cout <<"\n0.Thoat ";
        cout <<"\n=================== END ===================";
        cout <<"\nNhap lua chon cua ban: ";
        cin >>choice;
        if (choice == 1)
        {
            cout <<"Nhap gia tri cua NODE: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Push(s, p);
        }
        if (choice == 2)
        {
            while (!IsEmpty(s))
            {
                int x;
                Top(s, x);
                cout <<x <<" ";
            }
            system("pause");
        }
        if (choice == 3)
        {
            int x;
            Pop(s, x);
            cout <<x;
            system("pause");
        }
        if (choice == 0)
            break;
    }
}

int main()
{
    STACK s;
    Create_STACK(s);
    MENU(s);
	
	cout<<endl <<"Complete!!";
	return 0;
}
