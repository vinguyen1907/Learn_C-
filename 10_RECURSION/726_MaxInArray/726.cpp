#include <iostream>
#include <math.h>
using namespace std;

int max = 0;

int FindMax(int arr[], int n )
{
    if ( n == 1 )
        return arr[0];
    //int max = FindMax(arr, n - 1);
    if ( arr[n-1] > FindMax(arr, n-1) ) 
        return arr[n-1];
    else return FindMax(arr, n-1);
}

int main()
{
    int a[5] = { 3, -3, 5, 4, 2 };
    cout<<FindMax(a, 5);
	cout<<endl <<"Complete!!";
	return 0;
}
