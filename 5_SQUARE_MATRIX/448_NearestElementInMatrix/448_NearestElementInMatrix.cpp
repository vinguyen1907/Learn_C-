#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int n = 4, min = 1000000, beg, end;
    int a[n][n] = 
    {
        { 1,  3, 5 , 7 },
        { 8, 10, 12, 14 },
        { 16, 18, 20, 22 },
        { 24, 26, 28, 30 }
    };
    
    int b[n*n];
    int nb = 0;
    for ( int i = 0; i < n; i++ )
        for ( int j = 0; j < n; j++ )
        {
            b[nb] = a[i][j];
            nb ++;
        }

    for ( int i = 0; i < nb-1; i++ )
        for ( int j = i+1; j < nb; j++ )
            if ( abs(b[i] - b[j]) < min ) 
            {
                min = abs(b[i] - b[j]);
                beg = b[i];
                end = b[j];
            }
        
    cout<<beg <<" " <<end <<endl;

	cout<<endl <<"Complete!!";
	return 0;
}
