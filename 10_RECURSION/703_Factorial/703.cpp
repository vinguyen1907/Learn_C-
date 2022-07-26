#include <iostream>
#include <math.h>
using namespace std;

int factorial ( int n )
{
    int sum;
    if ( n == 0 ) 
        return 1;
    return n * factorial( n -1 );
}

int main()
{
    int x = 3;
    cout<<factorial(x);

	cout<<endl <<"Complete!!";
	return 0;
}
