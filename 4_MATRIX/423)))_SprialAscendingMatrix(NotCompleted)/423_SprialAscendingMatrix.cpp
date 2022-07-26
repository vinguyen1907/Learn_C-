#include <iostream>
#include <math.h>
using namespace std;

const int m = 4, n = 4;

int main()
{
   int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
        { -20, 67, 52, 23 }
    };

    int b[100];
    int nb = 0;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )   
        {
            b[nb] = a[i][j];
            nb++;
        }

    int tg;
    for ( int i = 0; i < nb-1; i++ )
        for ( int j = i+1; j < nb; j++ ) 
        {
            if ( b[i] > b[j] )
            {
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;
            }
        }

    for ( int i = 0; i < nb; i++ )
        cout<<b[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}
