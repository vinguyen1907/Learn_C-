#include  <iostream>
#include <string.h>
using namespace std;

struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};

Stack* CreateStack(unsigned capacity)
{
    Stack *s = new Stack;
    s->top = -1;
    s->capacity = capacity;
    s->array = new char[capacity * sizeof(char)];
    return s;
}

bool isFull(Stack *s)
{
    if (s->top == s->capacity)
        return 1;
    return 0;
}

void push(Stack *s, char x)
{
    if (isFull(s))
        return;
    s->top++;
    s->array[s->top] = x;
}

bool isEmpty(Stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}

char pop(Stack *s)
{
    if (isEmpty(s))
        return -1;
    return s->array[s->top--];
}

void reverse(char str[])
{
    int n = strlen(str);
    Stack *s = CreateStack(n);
    for (int i = 0; i < n; i++)
        push(s, str[i]);
    for (int i = 0; i < n; i++)
        str[i] = pop(s);
}

int main()
{
    char s[] = "Nguyen Tien Vi";
    reverse(s);
    cout << s;
    return 0;
}