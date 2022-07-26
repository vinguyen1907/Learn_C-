#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int size = 4, tg;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        { 15,  9 ,  2 , -1 },
        { -1, -1 , -1 , 0 }
    };

    for ( int i = size-1, j = 0; j < size-1; i--, j++ ) 
        for ( int m = i-1, n = j+1; n < size; m--, n++ ) 
            if ( a[i][j] > a[m][n] ) 
            {
                tg = a[i][j];
                a[i][j] = a[m][n];
                a[m][n] = tg;
            }
    
    for ( int i = 0; i < size; i++ )
    {
        for ( int j = 0; j < size; j++ )
            cout<<a[i][j];
        cout<<endl;
    }

    cout<<endl <<"Complete!!";
	return 0;
}
    