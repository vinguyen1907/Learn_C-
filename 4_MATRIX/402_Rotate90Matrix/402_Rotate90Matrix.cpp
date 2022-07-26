#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m =3, n = 4, x;
    int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
    };
    int b[n][m];
    for ( int i = 0; i < n; i++ )
        for ( int j = 0; j < m; j++ )
            b[i][j] = a[j][i];
    
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = 0; j < m; j++ )
            cout<<b[i][j] <<" ";
        cout<<endl;
    }
	cout<<endl <<"Complete!!";
	return 0;
}
