#include <iostream>
#include <math.h>
using namespace std;
int i,j;
const int m = 3,n = 3;
int a[m][n]=
	{
		{ 12, 51, -53 },
		{ 5, 61, -62 },
        { 1, 2, 3 }
    };


int main()
{
    int m = 3, n = 3, multi, x;
    
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( (a[i][j] > a[i-1][j]) && (a[i][j] > a[i][j-1]) && (a[i][j] > a[i][j+1]) && (a[i][j] > a[i+1][j]) )
                cout<<a[i][j] <<" ";


	cout<<endl <<"Complete!!";
	return 0;
}
