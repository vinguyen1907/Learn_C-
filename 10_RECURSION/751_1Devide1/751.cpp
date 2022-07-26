#include <iostream>
#include <math.h>
using namespace std;

float Devide( int n )
{
    if ( n == 0 )
        return 0;
    return 1/(1 + Devide(n-1));
}
int main()
{
    int n = 3;
    cout<<Devide(n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
