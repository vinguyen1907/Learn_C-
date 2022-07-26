#include <iostream>
#include <math.h>
using namespace std;

int UCLN(int x, int y)
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        if (y > x)
            y = y - x;
    }
    return x;
}

int BCNN ( int x, int y )
{
    return x * y / UCLN( x, y );
}

int main()
{
    int a[5] = { 2 , 4, 6, 8 , 10 };
    int x = a[1];
    for ( int i = 0; i < 5; i++ )
        x = BCNN( x, a[i] );
    cout<<x;

	cout<<endl <<"Complete!!";
	return 0;
}
