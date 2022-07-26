#include <iostream>
#include <math.h>
using namespace std;

int Max_Location(int arr[], int n)
{
    int max;
    if ( n == 1 ) 
        return 0;
    int Location = Max_Location(arr, n-1);
    if ( arr[n-1] > arr[Location] )
        Location = n;
    return Location;
}

int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    cout<<Max_Location(a, 5);
	cout<<endl <<"Complete!!";
	return 0;
}
