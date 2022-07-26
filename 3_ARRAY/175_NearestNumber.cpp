#include <iostream>
#include <math.h>
using namespace std;


int main()
{   
    int a[5] = { 9 ,2 , 1 ,6 ,7 };

    int x, y, delta, deltamin = 1000000;
    for ( int i=0; i < 4; i++ )
        for ( int j = i+1; j < 5; j++ )
        {
            delta = abs( a[i] - a[j] );
            if ( delta < deltamin )
            {
                deltamin = delta;
                x = a[i];
                y = a[j];
            }
        }
    cout<<x <<" " <<y;
	cout<<endl <<"Complete!!";
	return 0;
}
