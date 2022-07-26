#include <iostream>
#include <math.h>
using namespace std;

int Last_Digit( int x )
{
    return x % 10;
}

int Check_All_Odd( int x )
{
    while ( x != 0)
    {
        if ( Last_Digit( x ) % 2 == 0 )
            return false;
        x /= 10;
    }
    return true;
}

int main()
{  
    const int n = 5;
    int count = 0;
    int a[n] = { 213, 444, 222, 113, 123 };
    for ( int i = 0; i < n; i++)
        if ( Check_All_Odd( a[i] ) )
        {
            cout<<a[i];
            count++;
            break;
        }
    if ( count == 0 )
        cout<<0;

	cout<<endl <<"Complete!!";
	return 0;
}
