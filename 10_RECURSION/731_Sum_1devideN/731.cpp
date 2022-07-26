#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float Calculate(int n)
{
    if ( n == 0 )
        return 0;
    return (float)1/n + Calculate(n-1);
}

int main()
{
    int n = 3;
    cout<<setprecision(5) <<Calculate(n);

	cout<<endl <<"Complete!!";
	return 0;
}
