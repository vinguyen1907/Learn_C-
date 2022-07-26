#include <iostream>
using namespace std;

struct PT
{
    int a[100];
    int n;
} p;

void Input(PT &)
{
    for ( int i = 0; i < p.n; i++ )
    {
        cout<<"He so cua x^" <<p.n-i <<" = ";
        cin>>p.a[i];
    }
    cout<<"He so tu do = ";
    cin>>p.a[p.n];
}

void Output(PT)
{
    for ( int i = 0; i < p.n-1; i++ )
        cout<<p.a[i] <<".x^" <<p.n-i <<" + ";
    //p.a[p.n-2] = p.a[p.n-2] * (2);
    cout<<p.a[p.n-1] <<".x + ";
    cout<<p.a[p.n];
}

void Daoham(PT )
{
    for ( int i = 0; i < p.n-1; i++ )
        p.a[i] = p.a[i] * (p.n-i);
    p.n --;
}

int main()
{
    cout<<"Phuong trinh cap : ";
    cin>>p.n;
    Input(p);
    
    //Xuất biểu thức
    for ( int i = 0; i < p.n-1; i++ )
        cout<<p.a[i] <<".x^" <<p.n-i <<" + ";
    cout<<p.a[p.n-1] <<".x + ";
    cout<<p.a[p.n] <<endl;

    Daoham(p);
    Output(p);
 
	cout<<endl <<"Complete!!";
	return 0;
}
