#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 5;
    int a[n] = { 1, 2, 3 ,4 ,5 };

    for ( int i = 0; i < n; i++ )
    {
        for ( int length = i+1; length <= n; length++ )
        {
            for ( int j = i; j < length; j++ )
                cout<<a[j];
            cout<<endl;
        }
        cout<<endl;
    }
    
	cout<<endl <<"Complete!!";
	return 0;
}
