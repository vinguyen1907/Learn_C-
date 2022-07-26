#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int n = 4, max = 0;
    int a[n][n] = 
    {
        { 1,  2 , 3 , 4 },
        { 5,  6 , 7 , 8 },
        { 8,  9 , 10 ,11 },
        { 12, 13 ,14 ,15 }
    };
    
    for ( int i = 0; i < n-1; i++ )
        for ( int j = i+1; j < n; j++ )
            if ( a[i][j] > max ) 
                max = a[i][j];
    cout<<max;
	cout<<endl <<"Complete!!";
	return 0;
}
