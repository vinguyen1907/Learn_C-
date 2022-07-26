#include <iostream>
using namespace std;

struct Fraction 
{
    int Tu;
    int Mau;
} Fraction_Re;

void Input(Fraction &Fraction_Ex)
{
    cout<<"Fraction A/B " <<endl;
    cout<<"Input A = ";
    cin>>Fraction_Ex.Tu;
    cout<<"Input B = ";
    cin>>Fraction_Ex.Mau;
}

int GCD(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        if ( a < b )
            b = b - a; 
    }
    return a;
}

void Simplify(Fraction &Fraction_Ex)
{
    int x = GCD(Fraction_Ex.Tu, Fraction_Ex.Mau);
    Fraction_Ex.Tu = Fraction_Ex.Tu / x ;
    Fraction_Ex.Mau = Fraction_Ex.Mau / x;
}

void Output(Fraction Fraction_Ex)
{
    cout<<Fraction_Ex.Tu <<" / " <<Fraction_Ex.Mau;
}

int main()
{
    Input(Fraction_Re);
    Simplify(Fraction_Re);
    Output(Fraction_Re);

	cout<<endl <<"Complete!!";
	return 0;
}
