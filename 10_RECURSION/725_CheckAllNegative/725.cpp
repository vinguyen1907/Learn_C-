#include <iostream>
#include <math.h>
using namespace std;

bool Check(int arr[], int n)
{
    //Điều kiện dừng: đến a[0] thì xét 
    if ( n == 1 ) //~ a[0]
    {
        if ( arr[0] < 0 )
            return 1;
        return 0;
    }
    if ( Check(arr, n-1) == 1 && arr[n-1] < 0 ) 
    //Check phần tử trước vẫn là âm(==1) và phần tử này <0 thì mới là đúng
        return 1;
    return 0;
}

int main()
{
    int a[5] = { -1, -2, -3, -4, -5 };
    cout<<Check(a, 5);
	cout<<endl <<"Complete!!";
	return 0;
}