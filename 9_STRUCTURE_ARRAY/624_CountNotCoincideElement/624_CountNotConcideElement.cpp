#include <iostream>
#include <math.h>
using namespace std;

void Delete(int arr[], int location, int &size)
{
    for ( int i = location; i < size; i++ ) 
        arr[i] = arr[i+1];
    size --;
}

int Count_Not_Coincide_Element( int arr[], int size, int n )
{
    if ( n == 0 )
        return 0;
    int count = 0;
    for ( int i = 0; i < size; i++ )
        if ( arr[i] == arr[n-1] )
            count ++;

    if ( count > 1 )       //==1 là chính nó
            return Count_Not_Coincide_Element(arr, size, n-1);
    else
            return 1 + Count_Not_Coincide_Element( arr, size, n-1 );
}

int main()
{
    int sizeA = 10;
    int a[sizeA] = { 1, 2, 3, 4, 5, 5, 7, 7, 9, 9 };

    cout << Count_Not_Coincide_Element(a, sizeA, sizeA);

	cout<<endl <<"Complete!!";
	return 0;
}