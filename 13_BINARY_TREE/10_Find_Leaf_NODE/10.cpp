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
void Search_NODE_Have_2_Leaf(NODE *t)
{
    if ( t != NULL )
    {
        if (t->pLeft != NULL && t->pRight != NULL)
            cout <<t->data <<" ";
        Search_NODE_Have_2_Leaf(t->pLeft);
        Search_NODE_Have_2_Leaf(t->pRight);
    }
}

void Search_NODE_Have_1_Leaf(NODE *t)
{
    if ( t != NULL )
    {
        if ( (t->pLeft != NULL && t->pRight == NULL) || (t->pLeft == NULL && t->pRight != NULL) )
            cout <<t->data <<" ";
        Search_NODE_Have_1_Leaf(t->pLeft);
        Search_NODE_Have_1_Leaf(t->pRight);
    }
}

void Search_Leaf_NODE(NODE *t)
{
    if ( t != NULL )
    {
        if (t->pLeft == NULL && t->pRight == NULL) 
            cout <<t->data <<" ";
        Search_Leaf_NODE(t->pLeft);
        Search_Leaf_NODE(t->pRight);
    }
}

int main()
{
    NODE *t;
    Create_TREE(t);
    int choice, x;
    cout <<"Nhap 1 de them nhanh  ";
    cout <<"\nNhap 2 de xuat cay";
    cout <<"\nNhap 3 de Tim kiem NODE 2 la";
    cout <<"\nNhap 4 de Tim kiem NODE 1 la";
    cout <<"\nNhap 5 de Tim kiem NODE la";
    cout <<"\nNhap 0 de thoat\n";

    while (true)
    {
        //system("cls");
        cout <<"Nhap: ";
        cin >>choice;
        if (choice > 5 || choice < 0)
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
            Search_NODE_Have_2_Leaf(t);
            system("pause");
        }
        else if(choice == 4)
        {
            Search_NODE_Have_1_Leaf(t);
            system("pause");
        }
        else if(choice == 5)
        {
            Search_Leaf_NODE(t);
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