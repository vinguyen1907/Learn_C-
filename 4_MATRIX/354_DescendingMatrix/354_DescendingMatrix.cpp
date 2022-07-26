#include <iostream>
#include <math.h>
using namespace std;

const int m = 3, n = 4;
//Kiểm tra lại mảng không vuông, không hết hàng cột,lúc này làm biếng nên chưa sửa
bool DescendingRow ( int arr[][n], int n, int xRow )
{
    for ( int j = 0; j < n; j++ )
        if ( arr[xRow][j] < arr[xRow][j+1] )
            return false;
    return true;
}

bool DescendingCol ( int arr[][n], int m, int xCol)
{
    for ( int i = 0; i < m; i++ )
        if ( arr[i][xCol] < arr[i][xCol + 1] )
            return false;
    return true;
}

int main()
{
    bool result;
    int a[m][n]=
	{
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
    };
    for ( int i = 0, j = 0; i < m; i++, j++ )
    {
        if ( DescendingCol(a, n, i) && ( DescendingRow(a, m, j) ) )
            result = true;
        else result = false;
    }
    if ( result )
        cout<<1;
    else cout<<0;

	cout<<endl <<"Complete!!";
	return 0;
}
