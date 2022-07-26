#include <iostream>
#include <math.h>
using namespace std;

int k = 1, n;

float n_SQRT( int k )
{
    if ( k > n )
        return 0;
    return sqrt( k + n_SQRT(k+1));
}

int main()
{
	n = 3;
    cout<<n_SQRT(1);
	cout<<endl <<"Complete!!";
	return 0;
}
