#include <iostream>
#include <string.h>
using namespace std;

struct Node
{
    char data;
    Node *pNext;
};

struct Stack
{
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

void push(Stack &s, char x)
{
    Node *p = CreateNode(x);
    if (s.pTop == NULL)
    {
        s.pTop = p;
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

void reverse(char str[])
{
    Stack *s = new Stack;
    for (int i = 0; i < strlen(str); i++)
        push(*s, str[i]);
    for (int i = 0; i < strlen(str); i++)
        pop(*s, str[i]);
}

int main()
{
    char str[] = "Hello World!!";
    reverse(str);
    cout << str;
    return 0;
}