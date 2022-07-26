#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,delta,x1,x2;
    cout<<"PT B2 co dang ax^2+bx+c=0" <<endl;
    cout<<"Nhap a,b,c " <<endl;
    cin>>a>>b>>c;
    delta=pow(b,2)-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    cout<<"Nghiem cua Pt nay la " <<x1 <<x2;

	return 0;
}
