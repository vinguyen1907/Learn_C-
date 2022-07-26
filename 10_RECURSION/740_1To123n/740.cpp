#include <iostream>
#include <math.h>
using namespace std;

int Calculate(int n)
{
    int Multi = 1;
    if ( n == 0 )
        return 0;
    for ( int i = 1; i <= n; i++ )
        Multi *= i;
    return Multi + Calculate(n-1);
}

int main()
{
    int n =4;
    cout<<Calculate(n);

	cout<<endl <<"Complete!!";
	return 0;
}