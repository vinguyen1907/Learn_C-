#include <iostream>
#include <math.h>
using namespace std;


int main()
{    
    int n=6, x = 15, save;
    int a[n] = { 24, 45, 23, 13, 43, -12};
    int b[n];
    for ( int j = 0; j < n; ++j)
        b[j] = abs ( x - a[j] );

    int max = 0;
    for ( int i = 0; i < n; ++ i )
        if ( b[i] > max )
        {    max = b[i];
            save = i;
        }
    cout<<a[save];
	cout<<endl <<"Complete!!";
	return 0;
}
