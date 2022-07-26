#include <iostream>
#include <string>
using namespace std;

struct Info
{
    string studentID;
    string fullName;
    int gender;
    string classStudent;
    float everageScore;
};

struct Node
{
    Info data;
    Node *pNext;
};

struct List
{
    Node *pHead;
    Node *pTail;
};

Node *CreateNode(Info x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->data.studentID = x.studentID;
    p->data.fullName = x.fullName;
    p->data.gender = x.gender;
    p->data.classStudent = x.classStudent;
    p->data.everageScore = x.everageScore;
    return p;
}

int main()
{
}