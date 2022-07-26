#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int max = 0, m =2, n = 3;
	int a[m][n]=
	{
		{ 2, 1, 3 },
		{ 5, 6 ,6 },
	};
    //1st way: don't use extra array(short but difficult)
    // {for ( int i = 0; i < m*n-1; i++ )
	// 	for ( int j = i+1; j < m*n; j++ )
    //         if ( a[i/n][i%n] > a[j/n][j%n] )
    //         {
    //             tg = a[i/n][i%n];
    //             a[i/n][i%n] = a[j/n][j%n];
    //             a[j/n][j%n] = tg;
    //         }
	// for ( int i = 0; i < m; i++ )
    // {
    //     for ( int j = 0; j < n; j++)
    //         cout<<a[i][j] <<" ";
    //     cout<<endl;
    // }}

    //2nd way: use extra array(long but easy)
    int nb = 100, tg, k;
    int b[nb];
    k = 0;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
        {
            b[k] = a[i][j];
            k++;
        }
    for ( int i = 0; i < k-1; i++ )
        for ( int j = i+1; j < k; j++)
            if ( b[i] > b[j] )
            {
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;
            }
    k = 0;
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            a[i][j] = b[k];
            k ++;
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
    
	cout<<endl <<"Complete!!";
	return 0;
}
