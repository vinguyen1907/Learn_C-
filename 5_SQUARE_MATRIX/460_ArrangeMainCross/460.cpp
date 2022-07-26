#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int size = 4;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        { 15,  9 ,  2 , -1 },
        { -1, -1 , -1 , 0 }
    };
    // 1st Way: " Use extra array "
    // int b[1000];
    // int nb = 0, tg;
    // for ( int i = 0; i < size; i++ )
    // {
    //     b[nb] = a[i][i];
    //     nb ++;
    // }

    // for ( int i = 0; i < nb-1; i++ )  
    //     for ( int j = i+1; j < nb; j++)
    //         if ( b[i] > b[j] )
    //         {
    //             tg = b[i];
    //             b[i] = b[j];
    //             b[j] = tg;
    //         }
    // nb = 0;
    // for ( int i = 0; i < size; i++ )
    // {
    //     a[i][i] = b[nb];
    //     nb ++;
    // }

    // for ( int i = 0; i < size; i++ )
    // {
    //     for ( int j = 0; j < size; j++ ) 
    //         cout<<a[i][j];
    //     cout<<endl;
    // }

    //  2nd way: Don't use extra array
    int tg;
    for ( int i = 0; i < size-1; i++)
        for ( int j = i+1; j < size; j++ )
            if ( a[i][i] > a[j][j] )
            {
                tg = a[i][i];
                a[i][i] = a[j][j];
                a[j][j] = tg;
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
