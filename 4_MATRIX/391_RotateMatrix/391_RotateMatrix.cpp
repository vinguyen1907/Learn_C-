#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m = 4, n = 4;
    int b[m][n];
    int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
        { -20, 67, 52, 23 }
    };

    for ( int j = 0; j < n; j++ )
        b[0][j] = a[n-1][j];

    for ( int i = 1, j = 0; i < m; i++, j++ )
        for( int k = 0; k < n; k++)
            b[i][k] = a[j][k];

    for  ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<b[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
