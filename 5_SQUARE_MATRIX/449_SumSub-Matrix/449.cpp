#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int size = 4, sum = 0, max = 0;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        {  15,  9 ,  2 , -1 },
        { -1, -1 , -1 , -1 }
    };
    
    for ( int i = 0; i < size; i++ )
        for ( int j = 0; j < size; j++ )
        {
            for ( int size_submatrix = 1; size_submatrix <= size-i-1; size_submatrix++ )
            {
                sum = 0;
                for ( int m = i; m < i+size_submatrix; m++ ) 
                    for ( int n = j; n < j+size_submatrix; n++ )
                        sum += a[m][n];
                if ( sum > max ) 
                    max = sum;
            }
        }
    cout<<max;

	cout<<endl <<"Complete!!";
	return 0;
}
