#include <iostream>
using namespace std;

int k;

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
    cout<<p.a[p.n-1] <<".x + ";
    cout<<p.a[p.n] <<endl;
}

void Daoham(PT &)
{
    for ( int j = 1; j <= k; j++ )
    {
        for ( int i = 0; i < p.n-1; i++ )
            p.a[i] = p.a[i] * (p.n-i);
        p.n -= 1;
    }           
}

int main()
{
    cout<<"Phuong trinh cap : ";
    cin>>p.n;
    Input(p);
    cout<<"Dao ham cap k = ";
    cin>>k;

    //In biểu thức
    cout<<"y = ";
    for ( int i = 0; i < p.n-1; i++ )
        cout<<p.a[i] <<".x^" <<p.n-i <<" + ";
    cout<<p.a[p.n-1] <<".x + " ;
    cout<<p.a[p.n] <<endl;

    Daoham(p);
    cout<<p.n <<endl;
    Output(p);
    cout<<endl;
    
	cout<<endl <<"Complete!!";
	return 0;
}
