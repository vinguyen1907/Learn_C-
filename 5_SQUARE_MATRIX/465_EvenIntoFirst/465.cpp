#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int size = 4, tg, sum = 0;
    int a[size][size] = 
    {
        
        { 1, 2 , 3 , 1 },
        { 5,  6 ,  7 , 1 },
        { 15,  9 ,  2 , 1 },
        { 1, 1 , 1 ,  0 }
    };

    for ( int i = 0; i < size; i++ ) 
        for ( int j = 0; j < size-1; j++ ) 
            for ( int k = j+1; k < size; k++ ) 
                if ( ( a[i][j] % 2 == 1 ) && ( a[i][k] % 2 == 0) )
                {
                    tg = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tg;
                }
    for ( int i = 0; i < size; i++ ) 
    {
        for ( int j = 0; j < size; j++ ) 
            cout<<setw(5) <<a[i][j] <<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
