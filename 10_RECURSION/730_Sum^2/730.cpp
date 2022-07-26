#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int Calculate(int n)
{
    if ( n == 0 )
        return 0;
    return pow(n, 2) + Calculate(n-1);
}

int main()
{
    int n = 5;
    cout<<setprecision(5) <<Calculate(5);

	cout<<endl <<"Complete!!";
	return 0;
}
