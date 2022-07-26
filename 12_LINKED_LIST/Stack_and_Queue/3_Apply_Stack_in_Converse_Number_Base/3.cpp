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
    x = s.pTop->data;

    NODE *g = new NODE;
    s.pTop = s.pTop->pNext;
    delete g;
}

//Hàm đổi cơ số
void Change_Base(int Number_Need_To_Change, int Base_Want_To_Change_Into)
{
    STACK s;
    Create_STACK(s);
    int num = Number_Need_To_Change, du;
    while (num != 0) 
    {
        du = num % Base_Want_To_Change_Into;
        num = num / Base_Want_To_Change_Into;
        NODE *p = Create_NODE(du);
        Push(s, p);
    }
    while (!IsEmpty(s))
    {
        int x;
        Top(s, x);
        if (x < 10)
            cout <<x;
        else
        {
            switch (x)
            {
                case 10:
                {
                    cout <<"A";
                    break;
                }
                case 11:
                {
                    cout <<"B";
                    break;
                }
                case 12:
                {
                    cout <<"C";
                    break;
                }
                case 13:
                {
                    cout <<"D";
                    break;
                }
                case 14:
                {
                    cout <<"E";
                    break;
                }
                case 15:
                {
                    cout <<"F";
                    break;
                }
            }
        }
    }
}

int main()
{
    system("cls");
    int Number_Need_To_Change, Base_Want_To_Change_Into;
    cout <<"============== DOI CO SO 10 SANG CAC CO SO KHAC ==============" <<endl;
    cout <<"Nhap so muon doi: ";
    cin >>Number_Need_To_Change;
    cout <<"Doi sang he: ";
    cin >>Base_Want_To_Change_Into;
    Change_Base(Number_Need_To_Change, Base_Want_To_Change_Into);
	
	cout<<endl <<"Complete!!";
	return 0;
}
