#include <iostream>
#include <math.h>
using namespace std;

bool Check(int x)
{
    int i = 0;
    while ( pow( 2, i ) <= x )
    {
        if ( pow( 2, i ) == x)
            return true;
        i++;
    }

}

int main()
{
    int n = 5, count = 0 ;
    int a[n] = { 3, 3, 4, 5, 9 };
    for ( int i=0; i < n; i++)
        if ( Check( a[i] ) )
        {
            cout<<a[i];
            count ++;
            break;
        }
    if ( count = 0 )
        cout<<0;
	cout<<endl <<"Complete!!";
	return 0;
}
