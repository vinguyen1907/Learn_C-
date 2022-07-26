#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int n = 4, sum = 0;
    int a[n][n] = 
    {
        { 1,  2 , 3 , 4 },
        { 5,  6 , 7 , 8 },
        { 8,  9 , 10 ,11 },
        { 12, 13 ,14 ,15 }
    };
    
    for ( int j = 0; j < n; j++ )
        sum += a[0][j] + a[n-1][j];
    
    for ( int i = 1; i < n-1; i++ )
        sum += a[i][0] + a[i][n-1];
    cout<<sum;
    
	cout<<endl <<"Complete!!";
	return 0;
}
