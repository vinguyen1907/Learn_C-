#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

const int m = 4, n = 4;

int CountPositive( int arr[][n], int xRow, int xCol )
{
    int count = 0;
    for ( int j = xCol-1; j <= xCol+1; j++ )
        if ( arr[xRow - 1][j] > 0 ) 
            count ++;

    for ( int j = xCol-1; j <= xCol+1; j++ )
        if ( arr[xRow + 1][j] > 0 ) 
            count ++;

    if ( arr[xRow][xCol - 1] > 0 )
        count ++;

    if ( arr[xRow][xCol + 1] > 0 )
        count ++;
    return count;
}

int main()
{
    int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
        { -20, 67, 52, 23 }
    };

    for ( int i = -1; i <= m; i++ )
    {
        a[i][-1] = 0;
        a[i][n] = 0;
    }
    for ( int j = -1; j <= n; j++ )
    {
        a[-1][j] = 0;
        a[m][j] = 0;
    }
    
    
    int b[m][n] = {0};

    // for ( int i = 0; i < m; i++ )
    //     for ( int j = 0; j < n; j++ )
    //         b[i][j] = CountPositive( a, i, j );

    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<setw(4) <<a[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
