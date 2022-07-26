#include <iostream>
#include <math.h>
using namespace std;

int count = 0;

int Count(int arr[], int n) 
{
    bool flag = 1;
    if ( n < 1 ) 
        return 0;
    if ( n ==1 ) 
        return 1;
    count = Count(arr, n -1 );

    for ( int i = 0; i < n-1; i++ ) 
        if ( arr[i] == arr[n-1] )
            flag = 0;
    if ( flag == 1 )
        count++;
    
    return count;
}

int main()
{
    int a[5] = { 1, 2, 1, 3, 2 };
    cout<<Count(a, 5);

	cout<<endl <<"Complete!!";
	return 0;
}
