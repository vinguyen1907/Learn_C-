#include <iostream>
#include <math.h>
using namespace std;

int CountDigit(int n)
{
    if ( n == 0 )
        return 0;
    return n%10 + CountDigit(n/10);
}

int main()
{
    int n = 1907;
    cout<<CountDigit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
