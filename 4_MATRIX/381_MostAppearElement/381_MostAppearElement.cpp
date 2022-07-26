#include <iostream>
#include <math.h>
using namespace std;

const int m = 2, n = 3;

int FindElement( int arr[][n], int Row, int Col, int Element )
{
    int count = 0;
    for ( int i = 0; i < Row; i++ )
        for ( int j = 0; j < Col; j++ )
            if ( arr[i][j] == Element )
                count ++;
    return count;
}

int main()
{
    int countx, save;
    int a[m][n] = 
    {
        { 1, 5, 7 },
        { 2 ,2 ,6 }
    };
    int max = 0;
    for ( int i = 0; i< m; i++ )
        for ( int j = 0; j < n; j++ )
        {
            countx = FindElement( a, m, n, a[i][j] );
            if ( countx  > max )
            {
                max = countx;
                save = a[i][j];
            }
        }
    cout<<save;
	cout<<endl <<"Complete!!";
	return 0;
}
