#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int count = 0;
    int a[5] = { 1, 0, 0, 1, 2};
    for ( int i = 0; i < 5; i++ )
        if ( ( a[i] == 0) && ( a[i+1] == 0 ) )
            count++;
    if ( count != 0 )
        cout<<"Yes";
    else cout<<"No";
	cout<<endl <<"Complete!!";
	return 0;
}
