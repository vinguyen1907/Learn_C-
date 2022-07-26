#include <iostream>
#include <math.h>
using namespace std;

void Delete(int arr[], int Location )
{
    for ( int i = Location; i < 5; i++ )
        arr[i] = arr[i+1];
}

int main()
{
    int a[5] = { 1, 1, 2, 3, 2};
    for ( int i = 0; i < 5; i++ )
        for ( int j = i+1; j < 5; j++ )
            if ( a[j] == a[i] )
                Delete(a, j);\
    for ( int i = 0; i < 5; i++ )
        if ( a[i] != 0 )
            cout<<a[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}
