#include <iostream>
#include <math.h>
using namespace std;

struct NODE
{
    int data;
    NODE *pLeft;
    NODE *pRight;
};

void Create_TREE(NODE *&t)
{
    t = NULL;
}

void Add_NODE(NODE *&t, int x)
{
    if (t == NULL)  //t là NODE gốc
    {
        NODE *p = new NODE;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else 
    {
        if (x < t->data)
            Add_NODE(t->pLeft, x);
        else if (x > t->data)
            Add_NODE(t->pRight, x);
    }
}

void Output_LNR(NODE *t)
{
    if ( t != NULL )
    {
        Output_LNR(t->pLeft);
        cout <<t->data <<"  ";
        Output_LNR(t->pRight);
    }
}

int main()
{
    NODE *t;
    Create_TREE(t);
    int choice, x;
    cout <<"Nhap 1 de them nhanh \nNhap 2 de xuat cay \nNhap 0 de thoat";
    while (true)
    {
        //system("cls");
        cout <<"Nhap: ";
        cin >>choice;
        if (choice > 2 || choice < 0)
        {
            cout <<"Lua chon ko hop le. Nhap lai!";
            system("pause");
        }
        else if (choice == 1)
        {
            cout <<"Nhap gia tri muon them: ";
            cin >>x;
            Add_NODE(t, x);
        }
        else if (choice == 2)
        {
            Output_LNR(t);
            system("pause");
        }
        else if (choice == 0)
        {
            break;
        }
    }
	
	cout<<endl <<"Complete!!";
	return 0;
}
// => Nhận thấy kết quả sắp xếp theo tăng dần
// => LNR để sắp xếp tăng dần. RNL xếp giảm dần