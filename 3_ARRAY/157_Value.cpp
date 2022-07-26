#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float a[5] = { 1.2, 3, 100.5, 6, 5 };
    float max = a[0], min = a[0];
    for ( int i=0; i < 5; i++)
    {   if ( a[i] > max )
            max = a[i];
        if ( a[i] < min )
            min = a[i];
    }
    cout<<min <<" to " <<max;
	cout<<endl <<"Complete!!";
	return 0;
}
