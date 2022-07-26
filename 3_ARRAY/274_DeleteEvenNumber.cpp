#include <iostream>
#include <math.h>
using namespace std;

//Delete 
void Delete( int a[], int Location )
{
    for ( int i = Location; i < 5; i++ )
        a[i] = a[i+1];
}

int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    for ( int i = 0; i < 5; i++ )
        if ( a[i] % 2 == 0 )
            Delete(a, i);
    for ( int i = 0; i < 5; i++ )
        if ( a[i] != 0 )
            cout<<a[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
