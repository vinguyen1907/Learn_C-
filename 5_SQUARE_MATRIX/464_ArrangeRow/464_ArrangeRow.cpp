#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int size = 4, tg, sum = 0;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        { 15,  9 ,  2 , -1 },
        { -1, -1 , -1 ,  0 }
    };

    int b[1000];
    for ( int i = 0; i < size; i++ )
    {
        sum = 0;
        for ( int j = 0; j < size; j++ )
            sum += a[i][j];
        b[i] = sum;
    }

    for ( int i = 0; i < size-1; i++ )  
        for ( int j = i+1; j < size; j++ )
            if ( b[i] > b[j] ) 
            {
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;
            }

    int c[size][size];
    int cRow = 0;
    for ( int locate_b = 0; locate_b < size; locate_b++ )
        for ( int i = 0; i < size; i++ )
        {
            sum = 0;
            for ( int j = 0; j < size; j++ )
                sum += a[i][j];
            if (b[locate_b] = sum )
            {
                for ( int l = 0; l < size; l++ )
                    c[cRow][l] = a[i][l];
                cRow++;
            }
        }

    for ( int i = 0; i < size; i++ )
    {
        for ( int j = 0; j < size; j++ )
            cout<<c[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
