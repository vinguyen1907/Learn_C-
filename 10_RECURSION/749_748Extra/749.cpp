#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int k = -1;

float n_SQRT(int n, int save_n)
{
    if ( n == 0 )
        return 0;
    k ++;
    return sqrt( save_n - k + n_SQRT(n-1, save_n) );
}

int main()
{
    int n = 3;
    cout<<n_SQRT(n, n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
