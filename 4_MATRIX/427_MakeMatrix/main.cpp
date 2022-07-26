#include <iostream>
#include <math.h>
using namespace std;

const int m =4, n = 4;

int Max( int arr[][n], int Row, int Col ) 
{
    int max1 = 0, max2 = 0, max;

    for ( int j = 0; j < n; j++ ) 
        if ( arr[Row][j] > max ) 
            max1 = arr[Row][j];

    for (int i = 0; i < m; i++ ) 
        if ( arr[i][Col] > max2 ) 
            max2 = arr[i][Col];
    
    if ( max1 > max2 ) 
        max = max1;
    else max = max2;
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
    int b[m][n];
    
    for (int i = 0; i < m; i++)
        for ( int j = 0; j < n; j++)
            b[i][j] = Max(a, i , j);
      
    for (int i = 0; i < m; i++)
    {
        for ( int j = 0; j < n; j++)
            cout<<b[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}

