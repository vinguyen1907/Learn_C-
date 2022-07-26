#include <iostream>
#include <math.h>
using namespace std;

bool CheckPrimeNumber ( int x )
{
	if ( x < 2 )
		return false;
	else 
	for ( int i =2; i <= sqrt(x); ++i)
		if ( x % i == 0 )
			return false;
	return true;
}

int main()
{	int n =5, count = 0, save;
	int a[n] = { 1, 2, 4, 4, 3 };
	for ( int i = 0; i < n; ++i )
		if ( CheckPrimeNumber( a[i] ) )
		{
			count ++;
			save = a[i];
		}
	if ( count == 0 )
		cout<<"-1";
    else cout<<save;
	cout<<endl <<"Complete!!";
	return 0;
}
