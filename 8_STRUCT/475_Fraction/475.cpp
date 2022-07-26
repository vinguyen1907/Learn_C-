#include <iostream>
#include <math.h>
using namespace std;

struct Fraction
{
    int tu;
    int mau;
};

int main()
{
    Fraction Frac1;
    cout<<"Tu = ";
    cin>>Frac1.tu;
    cout<<"Mau = ";
    cin>>Frac1.mau;
    cout<<"Fraction is: " <<Frac1.tu <<"/" <<Frac1.mau;

	cout<<endl <<"Complete!!";
	return 0;
}
