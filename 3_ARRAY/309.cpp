#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int nb=0;
    int b[nb];
    int a[11] = { 2, -1, 4, -7, 10, 5, -9, 5, 8, 12, -10 };
    for ( int i = 0; i < 11; i++ )
    {
        b[nb] = a[i-1] + a[i+1];
        nb++;
    }
    for ( int i = 0; i < nb; i++)
        cout<<b[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
