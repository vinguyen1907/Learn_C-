#include <iostream>
#include <math.h>
using namespace std;

struct NODE
{
    int data;
    NODE *pNext;
};

struct QUEUE
{
    NODE *pHead;    //Lấy và xóa bằng pHead
    NODE *pTail;    //Thêm bằng pTail
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

void Create_QUEUE(QUEUE &q)
{
    q.pHead = NULL;
    q.pTail = NULL;
}


// ===== CÁC THAO TÁC VỚI QUEUE ======
// 1. IsEmpty: kiểm tra QUEUE có rỗng không
// 2. Push: Thêm 1 đối tượng vào cuối QUEUE - cơ chế FIFO(First In First Out - xếp hàng, ai tới trước thì ra trc)
// 3. Pop: Lấy phần tử đầu QUEUE, trả về giá trị của phần tử đó và hủy nó đi
// 4. Top: xem thông tin của phần tử đầu QUEUE, không xóa

bool IsEmpty(QUEUE q)
{
    if (q.pHead == NULL)
        return true;
    return false;
}

void Push(QUEUE &q, NODE *p)
{
    //Nếu danh sách đang rỗng
    if (IsEmpty(q))
        q.pHead = q.pTail = p;
    else //Nếu danh sách có sẵn thì thêm vào cuối
    {
        q.pTail->pNext = p;;
        q.pTail = p;
    }
}

void Pop(QUEUE &q, int &x)  //lấy phần tử đầu trả về cho x, xóa phần tử đầu
{
    x = q.pHead->data;

    NODE *g = q.pHead;
    q.pHead = q.pHead->pNext;
    delete g;
}

void Top(QUEUE q, int &x)
{
    x = q.pHead->data;
}

void MENU(QUEUE &q)
{
    int choice, x;
    while (true)
    {
        system("cls");
        cout <<"=================== MENU ===================";
        cout <<"\n1. Them NODE vao cuoi QUEUE ";
        cout <<"\n2. Xuat danh sach QUEUE va Xoa(Top) ";
        cout <<"\n3. Xem vi tri dau QUEUE, ko xoa(Pop)";
        cout <<"\n0.Thoat ";
        cout <<"\n=================== END ===================";
        cout <<"\nNhap lua chon cua ban: ";
        cin >>choice;
        if (choice == 1)
        {
            cout <<"Nhap gia tri cua NODE: ";
            cin >>x;
            NODE *p = Create_NODE(x);
            Push(q, p);
        }
        if (choice == 2)
        {
            if (IsEmpty(q))
                cout <<"Danh sach dang rong" <<endl;
            else
                while (!IsEmpty(q))
                {
                    int x;
                    Top(q, x);
                    cout <<x <<" ";
                }
            system("pause");
        }
        if (choice == 3)
        {
            if (IsEmpty(q))
                cout <<"Danh sach dang rong" <<endl;
            else
            {
                int x;
                Pop(q, x);
                cout <<x;
            }
            system("pause");
        }
        if (choice == 0)
            break;
    }
}

int main()
{
    QUEUE q;
    Create_QUEUE(q);
    MENU(q);
	
	cout<<endl <<"Complete!!";
	return 0;
}