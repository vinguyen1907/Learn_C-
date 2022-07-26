#include <iostream>
#include <math.h>
using namespace std;

int count = 0;

int Count( int arr[], int n )
{
    if ( n == 0 )
        return 0;
    count = Count(arr, n -1);
    if ( arr[n-1]> 0 )
        count++;
    return count;  
}

int main()
{
    int a[5] = { -1, 2, -3, 4, -5 };
    cout<<Count(a, 5);

	cout<<endl <<"Complete!!";
	return 0;
}
