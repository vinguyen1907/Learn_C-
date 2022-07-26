#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define MAX 20
int a[MAX];
int Bool[MAX] = {0};
int n;
void output() 
{
    for (int i = 1; i <= n; i++ )
        cout<<setw(3) <<a[i];
    cout<<endl;
}

void Try( int k )
{
    for ( int i = 1; i <= n; i++ )
        if ( Bool[i] == 0 )
        {
            a[k] = i;
            Bool[i] = 1;
            if ( k == n )
                output();
            else Try(k + 1);
            Bool[i] = 0;
        }
}

int main()
{
    n = 3;
    Try(1);
	cout<<endl <<"Complete!!";
	return 0;
}
