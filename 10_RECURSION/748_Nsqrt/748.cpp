#include <iostream>
#include <math.h>
using namespace std;

float n_sqrt(int n)
{
    if ( n == 0 ) 
        return 0;
    return sqrt(2 + n_sqrt(n-1));
}

int main()
{
    int n = 3;
    cout<<n_sqrt(n);
	cout<<endl <<"Complete!!";
	return 0;
}
