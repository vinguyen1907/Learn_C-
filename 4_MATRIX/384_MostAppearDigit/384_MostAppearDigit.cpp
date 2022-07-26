#include <iostream>
#include <math.h>
using namespace std;
const int m = 3, n = 5;
int b[10];

int CountDigit( int x )
{
    int digit;
    while ( x != 0 )
    {
        digit = x % 10;
        for ( int i = 0; i < 10; i++ )
            if ( digit == i )
                b[i] ++;
        x /= 10;
    }
}

int main()
{
    int save, max = 0;
    int a[m][n] = 
    {
        { 34, 45, 23, 24, 52 },
        { 78, 47, 45, 31, 34 },
        { 94, 34, 22, 76, 74 }
    };
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            CountDigit( a[i][j] );
    
    for ( int i = 0; i < 10; i++ )
        if ( b[i] > max )
        {
            max = b[i];
            save = i;
        }
    cout<<save;

	cout<<endl <<"Complete!!";
	return 0;
}
