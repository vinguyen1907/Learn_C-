#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 11, length, nb, max = 0, sum;
    int a[n] = { 2, -1, 4, -7, 10, 5, -9, 5, 8 ,12 ,-10 };
    //int a[n] = { -1, -2, 3, 4 ,5 };
    int b[nb];
    for ( int i = 0; i < n; i++ )
        for ( int length = i+1; length <= n; length++ )
        {
            nb = 0;
            sum = 0;
            for ( int j = i; j < length; j++ )
            {
                b[nb] = a[j];
                sum += a[j]; 
                nb++;
            }
            if ( sum > max )
                max = sum;
        }
    cout<<max;
	cout<<endl <<"Complete!!";
	return 0;
}
