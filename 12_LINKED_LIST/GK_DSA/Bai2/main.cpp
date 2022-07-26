#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Info
{
    string fullName;
    int numberOfTickets;
    int typeOfSeat;
    string date;
    int typeOfTickets;
};

struct NODE
{
    Info data;
    NODE *pNext;
};

struct List
{
    NODE *pHead;
    NODE *pTail;
};

NODE *CreateNODE(string fullName, int numberOfTickets, int typeOfSeat, string date, int typeOfTickets)
{
    NODE *p = new NODE;
    p->data.fullName = fullName;
    p->data.numberOfTickets = numberOfTickets;
    p->data.typeOfSeat = typeOfSeat;
    p->data.date = date;
    p->data.typeOfTickets = typeOfTickets;
    p->pNext = NULL;
    return p;
}

void CreateList(List &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

void AddHead(List &l, NODE *p)
{
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

void inputNumberOfPeople(List &l)
{
    int m;
    cout << "Input number of people buying tickets:";
    cin >> m;
    string fullName, date;
    int typeOfTickets, typeOfSeat, numberOfTickets; 
    for (int i = 0; i < m; i++)
    {
        cout << "INPUT INFORMATION OF PEOPLE NUMBER " << i+1 << "\n";
        cout << "- Input name of people number " << i+1 << ": ";
        cin.ignore();
        getline(cin, fullName);
        cout << "- Input number of tickets: ";
        cin >> numberOfTickets;
        cin.ignore();
        cout << "- Input date: ";
        getline(cin, date);
        cout << "- Input type of tickets(1: single seat, 2: double seat): ";
        cin >> typeOfSeat;
        cout << "- Input type of tickets(1: sale, 0: non-sale): ";
        cin >> typeOfTickets;
        NODE *p = CreateNODE(fullName, numberOfTickets, typeOfSeat, date, typeOfTickets);
        AddHead(l, p);
    }
}

void outputListNotSaleTicket(List &l)
{
    cout << "LIST OF PEOPLE BUYING NON-SALE TICKET\n";
    for (NODE *k = l.pHead; k != NULL; k = k->pNext)
        if (k->data.typeOfTickets == 0)
            cout << k->data.fullName << endl;
}

int main()
{
    List l;
    inputNumberOfPeople(l);
    outputListNotSaleTicket(l);
    return 0;
}