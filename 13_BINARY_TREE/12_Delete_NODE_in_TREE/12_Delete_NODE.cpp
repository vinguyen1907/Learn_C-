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

void Delete_NODE(NODE *&t, int x)
{
    if (t == NULL) 
        return;
    else
    {
        if (x < t->data)
            Delete_NODE(t->pLeft, x);
        else if (x > t->data)
            Delete_NODE(t->pRight, x);
        else //if (t->data == x)
        {
            NODE *p = t;
            // if (t->pLeft == NULL && t->pRight == NULL)
            //     t = NULL;
            if (t->pLeft == NULL) 
            {
                t = t->pRight; 
            }
            else if (t->pRight == NULL)
            {
                t = t->pLeft;
            }
            delete(p);
        }
    }
}

int main()
{
    NODE *t;
    Create_TREE(t);
    int choice, x;
    cout <<"1. Them nhanh";
    cout <<"\n2. Xuat cay";
    cout <<"\n3. Xoa NODE";
    cout <<"\n0. Thoat\n";

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
            cout <<"Nhap gia tri muon xoa: ";
            cin >>x;
            Delete_NODE(t, x);
            cout << "OK";   //Để test
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