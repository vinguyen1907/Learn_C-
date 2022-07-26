#include <iostream>
using namespace std;

struct Fraction 
{
    int Tu;
    int Mau;
} Fraction1, Fraction2;

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
        if ( a > b ) 
            a = a - b;
        if ( a < b )
            b = b - a; 
    }
    return a;
}

int LCM(int a, int b)
{
    return a * b / GCD(a,b);
}

Fraction Simplify(Fraction Fraction_Ex)
{
    int x = GCD(Fraction_Ex.Tu, Fraction_Ex.Mau);
    Fraction_Ex.Tu = Fraction_Ex.Tu / x ;
    Fraction_Ex.Mau = Fraction_Ex.Mau / x;
    return Fraction_Ex;
}

//Nạp chồng toán tử + Phân số
Fraction operator + (Fraction Fraction_Ex1, Fraction Fraction_Ex2)
{
    Fraction Fraction_Add;
    Fraction_Add.Mau = LCM(Fraction_Ex1.Mau, Fraction_Ex2.Mau);
    Fraction_Add.Tu = Fraction_Ex1.Tu * (Fraction_Add.Mau / Fraction_Ex1.Mau) + Fraction_Ex2.Tu * (Fraction_Add.Mau / Fraction_Ex2.Mau);
    return Fraction_Add;
}



void Output(Fraction Fraction_Ex)
{
    cout<<Fraction_Ex.Tu <<" / " <<Fraction_Ex.Mau;
}

int main()
{
    Input(Fraction1);
    Input(Fraction2);
    //Fraction x = Add(Fraction1, Fraction2);
    //Simplify(x) ;
    Output( Simplify( Fraction1 + Fraction2) );

	cout<<endl <<"Complete!!";
	return 0;
}
