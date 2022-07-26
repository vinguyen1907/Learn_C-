#include <iostream>
#include <math.h>
using namespace std;

int MaxDigit( int n )
{
    if ( n == 0 )
        return 0;
    int max = MaxDigit(n / 10);
    if ( n%10 > max )
        max = n % 10;
    return max;
}

int main()
{
    int n = 19072003;
    cout<<MaxDigit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
