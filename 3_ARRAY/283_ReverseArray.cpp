#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 5, tg;
    int a[n] = { 1, 2, 3, 4, 5 };

    for ( int i = 0; i < n/2; i++ )
    {
        tg = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tg;
    }

    for ( int i = 0; i < n; i++ )
        cout<<a[i];

	cout<<endl <<"Complete!!";
	return 0;
}
