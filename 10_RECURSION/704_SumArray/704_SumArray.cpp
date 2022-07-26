#include <iostream>
#include <math.h>
using namespace std;

int Sum( int arr[], int n ) 
{
    if ( n == 0 )
        return 0;
    else if ( arr[n-1] % 2 == 0 )
        return Sum(arr, n -1) + arr[n-1];
    else return Sum(arr, n - 1); 
}

int main()
{
    int result;
    int a[6] = { 1, 2, 3, 4, 5, 6 };
    result = Sum(a, 6);
    cout<<result;

	cout<<endl <<"Complete!!";
	return 0;
}
