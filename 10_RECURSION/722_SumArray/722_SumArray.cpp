#include <iostream>
#include <math.h>
using namespace std;

int sum = 0;

int Sum(int arr[], int n)
{
    if ( n == 0 ) 
        return 0;
    return arr[n-1] + Sum(arr, n-1);
}

int main()
{
    int a[100] = { 1, 2, 3, 4, 5 };
    cout<<Sum(a, 5);
	cout<<endl <<"Complete!!";
	return 0;
}
