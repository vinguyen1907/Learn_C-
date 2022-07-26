#include <iostream>
#include <math.h>
using namespace std;

bool isListed( int a[], int size, int element)
{
    for ( int i = 0; i < size; i++ )
        if (a[i] == element)
            return true;
    return false;
}

int main()
{   
    int save, count, count1 =0, max = 0;
    int a[5] = { 1, 5, 3, 5, 5 };
    for ( int i = 0; i < 5; i++ )
    {
        count =0;
        for ( int j = 0; j < 5; j++ )
            if ( a[j] == a[i] )
                count ++;
        if ( count >= max )
        {
            max = count;
        }
    }

    for ( int i = 0; i < 5; i++ )
    {
        count1 = 0;
        for ( int j = 0; j < 5; j++ )
            if ( a[i] == a[j] )
                count1++;
        if ( (count1 == max) && ( !isListed( a, i, a[i]) ) )
            cout<<a[i] <<" ";
    }

	cout<<endl <<"Complete!!";
	return 0;
}
