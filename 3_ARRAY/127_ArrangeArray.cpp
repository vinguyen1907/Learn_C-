#include <iostream>
using namespace std;
int main()
{   int n=10, tg=0;
    int a[n] = { 1, 5, 3, 7, 4, 8, 2, 10, 9, 6 };
    for ( int i=0; i <= n-2; ++i )
        for ( int j = i+1; j <= n-1; ++j)
            if ( a[i] > a[j] )
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
    for ( int i=0; i < n; ++i)
        cout<<a[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}
