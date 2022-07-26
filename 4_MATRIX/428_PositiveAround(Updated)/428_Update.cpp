#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

const int m = 4, n = 4;

int CountPositive( int arr[][n+2], int xRow, int xCol )
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

    //Tạo mảng b to hơn mảng a để xung quanh là số 0, nếu không tạo thì đếm sai
    int b[m+2][n+2] = {0};
    for ( int i = 1; i <= m; i++ )
        for ( int j = 1; j <= n; j++ )
            b[i][j] = a[i-1][j-1];

    int count[m][n];
    for ( int i = 1; i <= m; i++ )
        for ( int j = 1; j <= n; j++ )
            count[i-1][j-1] = CountPositive(b, i ,j);

    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<setw(4) <<count[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}