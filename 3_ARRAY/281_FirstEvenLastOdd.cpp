#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a[10] = { 0, 2, 1, 3 ,2, 5, 1, 2 ,4 ,6 };
    // int tg;
    // for ( int i = 0; i < 10; i++ )
    //     for ( int j = i+1; j < 10; j++ )
    //         if ( ( a[i] % 2 == 1) && ( a[j] % 2 == 0) )
    //         {
    //             tg = a[i];
    //             a[i]= a[j];
    //             a[j] = tg;
    //         }

    int b[10] = {0};
    int k = 0;
    for (int i = 0; i < 10; i++)
        if (a[i] != 0 && a[i] % 2 == 0)
        {
            b[k] = a[i];
            k ++;
        }
    k = 10-1;
    for (int i = 10-1; i >= 0; i--)
        if (a[i] != 0 && a[i] % 2 ==1)
        {
            b[k] = a[i];
            k --;
        }

    for ( int i = 0; i < 10; i++ )
        cout<<b[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}
