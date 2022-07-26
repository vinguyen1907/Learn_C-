#include <iostream>
#include <math.h>
using namespace std;

struct Hon_so
{
    int nguyen;
    int tu;
    int mau;
} P;

void Xuat(Hon_so p1)
{
    cout<<"  " <<p1.tu <<endl;
    cout<<p1.nguyen <<"---" <<endl;
    cout<<"  " <<p1.mau;
}

int main()
{
    P.nguyen = 2;
    P.tu = 1;
    P.mau = 5;
    Xuat(P);

	cout<<endl <<"Complete!!";
	return 0;
}
