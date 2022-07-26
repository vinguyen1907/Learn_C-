#include <iostream>
#include <math.h>
using namespace std;

struct Element
{
    int a[100];
    int n;
} p;

void Input(Element &)
{
    cout<<"Nhap bac da thuc = ";
    cin>>p.n;
    for ( int i = 0; i < p.n; i++ )
    {
        cout<<"Nhap he so thu " <<i+1 <<":";
        cin>>p.a[i];
    }
}

void Output(Element p)
{
    for ( int i = 0; i < p.n-1; i++ )
    {
        if ( p.a[i] == 1 )  cout<<"x^" <<p.n-i <<" + ";
        else cout<<p.a[i] <<"x^" <<p.n-i <<" + " ;
    }
    cout<<p.a[p.n-1] <<"x";
}

int main()
{
    Input(p);
    Output(p);


	cout<<endl <<"Complete!!";
	return 0;
}
