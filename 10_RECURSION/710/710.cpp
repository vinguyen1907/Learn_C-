#include <iostream>
#include <math.h>
using namespace std;

int factor( int n )
{
    if ( n == 0 ) 
        return 1;
    return n*factor(n-1);
}

float Calculate( int x, int n )
{
    if ( n == 0 )
        return 0;
    return pow(x, n) / factor(n) + Calculate(x, n-1);
}

int main()
{
    cout<<Calculate(2, 3);

	cout<<endl <<"Complete!!";
	return 0;
}
