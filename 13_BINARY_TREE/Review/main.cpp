#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *pLeft;
    Node *pRight;
};

void CreateTree(Node *&p)
{
    p = NULL;
}

void AddNode(Node *&p, int x)
{
    if (p == NULL)
    {
        Node *t = new Node;
        t->data = x;
        t->pLeft = NULL;
        t->pRight = NULL;
        p = t;
    }
    else
    {
        if (p->data > x)
        {
            AddNode(p->pLeft, x);
        }
        else if (p->data < x)
        {
            AddNode(p->pRight, x);
        }
    }
}

void outputNLR(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << "  ";
        outputNLR(p->pLeft);
        outputNLR(p->pRight);
    }
}

int main()
{
    Node *p;
    CreateTree(p);
    int x;
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        AddNode(p, x);
    }
    outputNLR(p);
    return 0;
}