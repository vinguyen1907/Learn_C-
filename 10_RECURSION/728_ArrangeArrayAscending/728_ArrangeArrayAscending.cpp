#include <iostream>
#include <math.h>
using namespace std;

void Arrange ( int arr[], int n )
{
    int temp;
    if ( n == 0 )
        return ;
    for ( int i = 0; i <= n - 2; i++ )
        if ( arr[i] > arr[n-1] )
        {
            temp = arr[i];
            arr[i] = arr[n-1];
            arr[n-1] = temp;
        }
    Arrange(arr, n - 1);
}

int main()
{
    int a[5] = { 1, 3 ,2 ,5, 4 };
    Arrange(a, 5);
    for ( int i = 0; i < 5; i++ )
        cout<<a[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}
