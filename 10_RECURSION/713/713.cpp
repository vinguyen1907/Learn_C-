#include <iostream>
#include <math.h>
using namespace std;

int Calculate ( int n )
{
    int s = 0;
    if ( n == 0 ) 
        return 1;
    for ( int i = 1; i <= n; i++ ) 
        s += i*i*Calculate(n-i);
    return s;
}

int main()
{
    cout<<Calculate(3);

	cout<<endl <<"Complete!!";
	return 0;
}
