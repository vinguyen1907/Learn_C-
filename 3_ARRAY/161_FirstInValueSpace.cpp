#include <iostream>
#include <math.h>
using namespace std;


int main()
{   
    int x = 2, y = 5, count = 0;
    int a[5] = { 1, 2, 3, 4, 5 };
    for ( int i = 0; i < 5; i++)
    if ( ( a[i] > x  ) && ( a[i] < y ) )
    {
        cout<<a[i];
        count ++;
        break;
    }
    if ( count == 0 )
        cout<<x;

	cout<<endl <<"Complete!!";
	return 0;
}
