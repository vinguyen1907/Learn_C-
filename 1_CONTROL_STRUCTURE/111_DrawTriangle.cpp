#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int h;
    cout<<"Height of triangle: ";
    cin>>h;
    for ( int i = 1; i <= h; i++ )
    {
        for ( int j = i; j <= h-1; j++ )
            cout<<" ";
        for ( int k = 1; k <= i; k++ )    
            cout<<"* ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
