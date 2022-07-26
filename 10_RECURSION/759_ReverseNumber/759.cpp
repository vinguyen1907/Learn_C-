#include <iostream>
#include <math.h>
using namespace std;

void ReverseNumber( int n )
{
    if ( n == 0 )
        return ;
    cout<<n % 10;
    ReverseNumber(n/10);
}

int main()
{
    int n = 19082003;
    ReverseNumber(n);
	cout<<endl <<"Complete!!";
	return 0;
}
