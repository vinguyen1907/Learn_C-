#include <iostream>
using namespace std;

struct NODE
{
    int data;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

NODE *CreateNode(int x)
{
    NODE * p = new NODE;
    if (p == NULL)
        return NULL;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void CreateLIST(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

void AddHead(LIST &l, int x)
{
    NODE *p = CreateNode(x);
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

void AddTail(LIST &l, int x)
{
    NODE *p = CreateNode(x);
    if (l.pHead == NULL)
    {
        l.pHead = p;
        l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void InsertpAfterq(LIST &l, NODE *p, NODE *q)
{
    if (l.pHead == q && l.pHead->pNext == NULL)
        AddTail(l, p->data);
    else
        for (NODE *k = l.pHead; k; k = k->pNext)
            if (k->data == q->data)
            {
                NODE *g = k->pNext;
                NODE *h = CreateNode(p->data);
                h->pNext = g;
                k->pNext = h;
            }
}

void DeleteNODEAtFirst(LIST &l)
{
    if (l.pHead->pNext == NULL)
    {
        l.pHead = l.pTail = NULL;
    }
    else
    {
        NODE *p;
        p = l.pHead;
        l.pHead = l.pHead->pNext;
        delete p;
    }
}

void DeleteNODEAtLast(LIST &l)
{
    if (l.pHead->pNext == NULL)
    {
        l.pHead = l.pTail = NULL;
    }
    else
    {
        for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        {
            if (k->pNext == l.pTail)
            {
                l.pTail = k;
                delete l.pTail->pNext;
                l.pTail->pNext = NULL;
            }
        }
    }
}

void DeleteNODEAfterq(LIST &l, int x)
{
    if (l.pHead->data == x && l.pHead->pNext == NULL)
        DeleteNODEAtLast(l);
    else
        for (NODE *k = l.pHead; k; k = k->pNext)
            if (k->data == x)
            {
                NODE *p = k->pNext;
                k->pNext = k->pNext->pNext;
                delete p;
            }
}

void OutputLIST(LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        cout << k->data << "  ";
}

int main()
{
    int choice = 0;
    LIST l;
    CreateLIST(l);
    while (true)
    {
        system("cls");
        cout << "============== NHAP LUA CHON ==============\n";
        cout << "1. Add NODE into Head of List.\n";
        cout << "2. Delete NODE at Head of List.\n";
        cout << "3. Add NODE into End of List.\n";
        cout << "4. Delete NODE at End of List.\n";
        cout << "5. Add NODE p after NODE q\n";
        cout << "6. Delete NODE p after NODE q\n";
        cout << "7. Export the list.\n";
        cout << "0. Exit.\n";
        cout << "===========================================\n";
        cout << "Lua chon cua ban la: ";
        cin >> choice;
        
        if (choice == 0)
            exit(1);
        else if (choice == 1)
        {
            int x;
            cout << "Input the data: ";
            cin >> x;
            AddHead(l, x);
        }
        else if (choice == 2)
        {
            DeleteNODEAtFirst(l);
        }
        else if (choice == 3)
        {
            int x;
            cout << "Input the data: ";
            cin >> x;
            AddTail(l, x);
        }
        else if (choice == 4)
        {
            DeleteNODEAtLast(l);
        }
        else if (choice == 5)
        {
            int x;
            cout << "Nhap NODE p can them: ";
            cin >> x;
            NODE *p = CreateNode(x);
            cout << "Nhap NODE q: ";
            cin >> x;
            NODE *q = CreateNode(x);
            InsertpAfterq(l, p, q);
        }
        else if (choice == 6)
        {
            int x;
            cout << "Nhap NODE q: ";
            cin >> x; 
            DeleteNODEAfterq(l, x);
        }
        else if (choice == 7)
        {
            OutputLIST(l);
            system("pause");
        }
    }
    return 0;
}