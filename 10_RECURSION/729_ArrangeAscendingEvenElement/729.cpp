#include <iostream>
#include <math.h>
using namespace std;

void ArrangeEvenElement(int arr[], int n)
{
    int temp;
    if ( n == 0 ) 
        return ; 
    if ( arr[n-1] % 2 == 0 )
        for ( int i = 0; i <= n-2; i++ ) 
            if ( (arr[i] > arr[n-1]) && (arr[i] % 2 == 0) )
            {
                temp = arr[i];
                arr[i] = arr[n-1];
                arr[n-1] = temp;
            }
    ArrangeEvenElement(arr, n - 1);
}

int main()
{
    int a[5] = { 1, 4, 5, 2, 3 };
    ArrangeEvenElement(a, 5);
    for ( int i = 0; i < 5; i++ ) 
        cout<<a[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
