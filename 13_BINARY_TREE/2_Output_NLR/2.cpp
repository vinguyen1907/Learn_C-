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

void Output_NLR(NODE *t)
{
    if ( t != NULL )
    {
        cout <<t->data <<"  ";
        Output_NLR(t->pLeft);
        Output_NLR(t->pRight);
    }
}

// void MENU(NODE *&t)
// {
//     int choice, x;
//     while (true)
//     {
//         system("cls");
//         cout <<"================ MENU ===============";
//         cout <<"\n1. Nhap du lieu ";
//         cout <<"\n2. Xuat du lieu cay(NLR) ";
//         cout <<"\n3. Xuat du lieu cay(NRL)";
//         cout <<"\n0. Thoat ";
//         cout <<"\n================ END ================";
//         cout <<"\nNhap lua chon: ";
//         cin >>choice;
//         if (choice > 3 || choice < 0)   
//         {
//             cout <<"Lua chon ko ton tai";
//             system("pause");
//         }
//         else if (choice == 1)
//         {
//             cout <<"Nhap gia tri muon them: ";
//             cin >>x;
//             Add_NODE(t, x);
//         }
//         else if (choice == 2)
//         {
//             Output_NLR(t);
//             system("pause");
//         }
//         else if (choice == 3)
//         {
//             Output_NRL(t);
//             system("pause");
//         }
//         else if (choice == 0)
//             break;
//     }
// }

int main()
{
    NODE *t;
    Create_TREE(t);
    int choice, x;
    cout <<"Nhap 1 de them nhanh \nNhap 2 de xuat cay \nNhap 0 de thoat";
    while (true)
    {
        system("cls");
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
            Output_NLR(t);
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