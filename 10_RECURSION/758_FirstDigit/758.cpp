#include <iostream>
#include <math.h>
using namespace std;

int digit;

int First_Digit( int n )
{
    if ( n < 10 ) 
        return n;
    return First_Digit(n / 10);
}

int main()
{
    int n = 123;
    cout<<First_Digit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
