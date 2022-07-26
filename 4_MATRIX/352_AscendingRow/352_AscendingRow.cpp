#include <iostream>
#include <math.h>
using namespace std;
const int m = 4,n = 4;

bool CheckRow ( int arr[][n], int n, int xRow )
{
    for ( int j = 0; j < n-1; j++ )
        if ( arr[xRow - 1][j] > arr[xRow - 1][j+1] )
            return false;
    return true;
}

int main()
{
    int x;
    bool check;
    int a[m][n]=
	{
        { 12, 32, 34, 90 },
        { 4, 20, 22, 40 },
        { 1, 31, 30, 5 },
        { 3, 34, 35, 23 }
    };
    cout<<"Input order of row to check: ";
    cin>>x;

    if ( CheckRow(a, n, x) )
        cout<<1;
    else cout<<0;
    
	cout<<endl <<"Complete!!";
	return 0;
}
