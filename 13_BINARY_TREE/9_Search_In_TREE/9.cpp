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

//Tìm trong cây t có giá trị x hay ko
bool Search(NODE *t, int x)
{
    if ( t == NULL )
        return false;
    else 
    {
        if (x == t->data)
            return true;
        if (x < t->data)
            Search(t->pLeft, x);
        if (x > t->data)
            Search(t->pRight, x);
    }
}

int main()
{
    NODE *t;
    Create_TREE(t);
     int choice, x;
    cout <<"Nhap 1 de them nhanh \nNhap 2 de xuat cay \nNhap 3 de Tim kiem gia tri trong cay\nNhap 0 de thoat\n";
    while (true)
    {
        //system("cls");
        cout <<"Nhap: ";
        cin >>choice;
        if (choice > 3 || choice < 0)
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
        else if(choice == 3)
        {
            cout <<"Nhap gia tri can tim: ";
            cin >>x;
            if (Search(t, x) == true)
                cout <<"Co phan tu nay trong cay";
            else
                cout <<"Khong co phan tu nay trong cay";
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