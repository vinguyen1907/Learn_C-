#include <iostream>
#include <math.h>
using namespace std;

int Multiply_OddDigit(int n )
{
    if ( n == 0 ) 
        return 1;
    if ( n % 2 == 1 ) 
        return n%10 * Multiply_OddDigit(n / 10);
    return Multiply_OddDigit(n / 10);
}

int main()
{
    int n = 123456;
    cout<<Multiply_OddDigit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
