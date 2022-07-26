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
    
    for ( int i = n-1, j = 0; j < n; i--, j++ )
        sum += a[i][j];
    cout<<sum;
	cout<<endl <<"Complete!!";
	return 0;
}
