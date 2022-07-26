#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m =4, n = 4, x;
    int a[m][n] =
    {
        { 87, 75, 62, 54 },
        { 46, 40, 33, 28 },
        { 20, 18, 15, 10 },
        { -20, 67, 52, 23 }
    };
    cout<<"Delete Column number: ";
    cin>>x;
    for( int j = x-1; j < n; j++ )
        for ( int i = 0; i < n; i++ )
            a[i][j] = a[i][j+1];
    n --;
    for( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<a[i][j] <<" ";
        cout<<endl;
    }
	cout<<endl <<"Complete!!";
	return 0;
}
