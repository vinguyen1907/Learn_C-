#include <iostream>
#include <math.h>
using namespace std;

int First_Digit(int n )
{
    if ( n == 0 ) 
        return 0;
    if ( n % 2 == 0 ) 
        return n%10 + First_Digit(n / 10);
    return First_Digit(n / 10);
}

int main()
{
    int n = 123456;
    cout<<First_Digit(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
