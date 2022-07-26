#include <iostream>
using namespace std;

struct Node 
{
    char data;
    Node *pNext;
};

struct Stack
{
    int n; //số phần tử
    Node *pTop;
};

Node *CreateNode(char key)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->data = key;
    p->pNext = NULL;
    return p;
}

void CreateStack(Stack &s, int n)
{
    s.pTop = NULL;
    s.n = n;
}

bool isEmpty(Stack s)
{
    if (s.pTop == NULL)
        return 1;
    return 0;
}

void push(Stack &s, char key)
{
    Node *p = CreateNode(key);
    if (isEmpty(s))
    {
        s.pTop = p;
        return;
    }
    else
    {
        p->pNext = s.pTop;
        s.pTop = p;
    }
}

void pop(Stack &s, char &x)
{
    x = s.pTop->data;
    Node *p = s.pTop;
    s.pTop = s.pTop->pNext;
    delete p;
}

void top(Stack &s, char &x)
{
    x = s.pTop->data;
}

int countMembers(Stack &s)
{
    Node *k = s.pTop;
    int count = 0;
    for (Node *k = s.pTop; k; k = k->pNext)
        count ++;
    return count;
}

void input(Stack &s)
{
    int n;
    cout << "Nhap so ki tu cua chuoi: ";
    cin >> n;
    CreateStack(s, n);
    char temp;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ki tu thu " << i+1 << ": ";
        cin >> temp;
        push(s, temp);
        if (temp == '(' || temp == '[' ||temp == '{')
            push(s, temp);
        else
        {
            char x;
            top(s, x);
            if (temp == ')' && x == '(')
                pop(s, x);
            else if (temp == ']' && x == '[')
                pop(s, x);
            if (temp == '}' && x == '{')
                pop(s, x);
        }
    }
    if (isEmpty(s))
        cout << "Dung";
    else
        cout << "Sai";

}

int main()
{
    Stack s;
    CreateStack(s, 20);
    input(s);
}