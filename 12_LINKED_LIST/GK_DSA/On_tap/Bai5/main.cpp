#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *pNext;
};

struct Stack
{
    Node *pTop;
};

Node *CreateNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void CreateStack(Stack &l)
{
    l.pTop = NULL;
}

bool IsEmpty(Stack s)
{
    if (s.pTop == NULL)
        return true;
    return false;
}

void push(Stack &s, int x)
{
    Node *p = CreateNode(x);
    //Nếu danh sách đang rỗng
    if (IsEmpty(s))
        s.pTop = p;
    else //Nếu danh sách có sẵn thì thêm vào đầu
    {
        p->pNext = s.pTop;
        s.pTop = p;
    }
}

void converse(int x, int goal)
{
    Stack s;
    CreateStack(s);
    int temp;
    while (x != 0)
    {
        temp = x % goal;
        x /= goal;
        push(s, temp);
    }
    for (Node *k = s.pTop; k; k = k->pNext)
        cout << k-> data;
}

int main()
{
    int n;
    cout << "Nhap n= ";
    cin >> n;
    converse(n, 2);
    return 0;
}