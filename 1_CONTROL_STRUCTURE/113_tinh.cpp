#include <iostream>
#include <math.h>
using namespace std;
double giaithua(int x)
{   
    int gt=1 ;
    for (int i=1; i<=x; ++i)
        gt=gt*i;
    return gt;
}

// //int luythua(int x, int n)
// {
//     int result;
//     int result=pow(x,n);
//     return result;
// }

int main()
{
    int k, result, x=3, n=7;
    double s=0.0;
    for (int k=0; k<=n; ++k)
         s+= pow((-1),k)*pow(x,2*k+1)/giaithua(2*k+1);
    cout<<s;
	return 0;
}
