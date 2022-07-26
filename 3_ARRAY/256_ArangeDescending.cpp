#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a[5] = { 1, 3, 2, 5, 4 };
    int tg;
    for ( int i = 0; i < 4; i++ )
        for ( int j = i+1; j < 5; j++ )
            if ( a[i] <  a[j] )
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    for ( int i = 0; i < 5; i++ )
        cout<<a[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
