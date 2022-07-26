#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[5] = { 444, 122, 333, 123, 156 };
    //Find min odd number in array
    long long minodd = 10000000000000000000000000000;
    for ( int i=0; i < 5; i++ )
        if ( (a[i] < minodd)  &&  (a[i] % 2 == 1) )
            minodd = a[i];
    cout<<minodd <<endl;

    //Find max even number less than min odd number
    int max = 0;
    for ( int j=0; j < 5; j++ )
        if ( (a[j] % 2 == 0)  &&  (a[j] < minodd)  &&  (a[j] > max) )
            max = a[j];
    cout<<max;
    //cout<<"The max even number less then min odd number is " <<( minodd -1 );

	cout<<endl <<"Complete!!";
	return 0;
}
