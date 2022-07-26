#include <iostream>
#include <math.h>
using namespace std;

const int m = 2, n = 3;

int ColDigit ( int arr[][n], int xCol )
{
    int count = 0, x;
    for ( int i = 0; i < m; i++ )
    {
        x = arr[i][xCol];
        while ( x != 0 )
        {
            count ++;
            x /= 10;
        }
    }
    return count;
}

int main()
{
    int max = 0, save;
    int a[m][n] =
    {
        { 11, 22 ,33 },
        { 1, 2 ,333 }
    };
    for ( int j = 0; j < n; j++ )
        if ( ColDigit(a, j) > max )
        {
            max = ColDigit(a, j);
            save = j + 1;
        }
    cout<<save;

	cout<<endl <<"Complete!!";
	return 0;
}
