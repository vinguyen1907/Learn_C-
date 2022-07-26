#include <iostream>
#include <math.h>
using namespace std;
const int m = 4, n = 4;
bool MaxRow ( int arr[m][n], int x, int numRow)
{
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( x < arr[numRow][j] )
                return false;
    return true;   
}

bool MaxCol ( int arr[m][n], int x, int numCol)
{
        for ( int i = 0; i < m; i++ )
            if ( x > arr[i][numCol] )
                return false;
    return true;   
}

int main()
{
    int a[m][n]=
	{
        { 12, 32, 34, 90 },
        { 1, 31, 30, 5 },
        { 4, 33, 20, 44 },
        { 3, 34, 35, 23 }
		// { 1, 3 ,2 },
		// { 1, 2, 1 },
        // { 1, 2, 1 }
    };
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( MaxRow(a, a[i][j], i)  &&  MaxCol(a, a[i][j], j) ) 
                cout<<a[i][j];

	cout<<endl <<"Complete!!";
	return 0;
}
