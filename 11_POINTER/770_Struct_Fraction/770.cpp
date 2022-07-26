#include <iostream>
#include <math.h>
using namespace std;

struct Fraction
{
    int Tu, Mau;
};

int GCD( int a, int b )
{
    while ( a != b )
    {
        if (a > b) 
            a = a - b;
        if ( a < b )
            b = b - a;
    }
    return a;
}

void Simplify(Fraction &Fr)
{
    int c = GCD(Fr.Tu, Fr.Mau);
    Fr.Tu = Fr.Tu / c;
    Fr.Mau = Fr.Mau / c;
}

int main()
{
    Fraction Frac;
    Fraction *Fr = &Frac;
    cout <<"Nhap tu so: ";
    cin >>Fr->Tu;
    cout <<"Nhap mau so: ";
    cin >>Fr->Mau;

    Simplify(Frac);
    cout<<"Phan so la: " <<Fr->Tu <<"/" <<Fr->Mau << endl;
    delete Fr;
	cout<<endl <<"Complete!!";
	return 0;
}
