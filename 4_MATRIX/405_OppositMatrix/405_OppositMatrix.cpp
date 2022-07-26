#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m =3, n = 4, tg;
    int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 }
    };

    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n/2; j++ )
        {
            tg = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = tg;
        }
    
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<a[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
