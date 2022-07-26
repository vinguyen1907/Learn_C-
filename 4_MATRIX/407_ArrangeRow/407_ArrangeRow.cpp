#include <iostream>
#include <math.h>
using namespace std;
const int m =4, n = 4;
void Arrange( int arr[][n], int Col, int xRow )
{
    int tg;
    for ( int i = 0; i < Col-1; i++ )
        for ( int j = i+1; j < Col; j++ )
            if ( arr[xRow][i] > arr[xRow][j] )
            {
                tg = arr[xRow][i];
                arr[xRow][i] = arr[xRow][j];
                arr[xRow][j] = tg;
            }
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
    
    for ( int i = 0; i < m; i++ )
        Arrange(a, n, i);

    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<a[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
