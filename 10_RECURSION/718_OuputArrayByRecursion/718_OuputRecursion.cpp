#include <iostream>
#include <math.h>
using namespace std;

void output(int arr[], int n)
{
    if ( n == 0 ) 
        return;
    output(arr, n-1);
    cout<<arr[n-1];
}
    
int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    output(a, 5);

	cout<<endl <<"Complete!!";
	return 0;
}
