#include <iostream>
#include <math.h>
using namespace std;

int sum( int n ) 
{
    if ( n == 0 ) 
        return 0;
    else return n + sum(n-1);
}

int main()
{
    int n = 5;
    cout<<sum(n)<<endl;

	cout<<endl <<"Complete!!";
	return 0;
}
