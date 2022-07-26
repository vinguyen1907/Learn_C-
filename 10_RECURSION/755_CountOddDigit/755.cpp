#include <iostream>
#include <math.h>
using namespace std;

int CountOddDigit(int n )
{
    if ( n == 0 )
        return 0;
    if ( n % 2 == 1 )
        return 1 + CountOddDigit(n / 10);
    return CountOddDigit(n / 10);
}

int main()
{
    int n = 19072003;
    cout<<CountOddDigit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
