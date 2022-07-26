#include <iostream>
#include <iomanip>
using namespace std;

float Calculate(int n)
{
	if ( n == 0 )
		return 0;
	int mau = 0;
	for ( int i = 1; i <= n; i++ )
		mau += i;
	return (float)1/mau + Calculate(n-1);
}

int main()
{
	int n = 5;
	cout<<setprecision(8) <<Calculate(n);
	cout<<endl <<"Complete!!";
	return 0;
}
