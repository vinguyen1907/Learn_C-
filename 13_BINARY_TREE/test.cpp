#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    const int n = 10;
    int save = n-1;
    int a[n] = { 1, 2, 1, 0 ,2, 3, 1, 2 ,0 ,6 };
    int b[10] = {0}, idx;
    for (int i = 0 ;i < n; i++)   
    {
        if (a[i] % 2 == 0)
        {
            b[idx] = a[i];
            idx++;
        }

        else 
        {
            b[save] = a[i];
            save--;
        }
    }   
            
    for ( int i = 0; i < 10; i++ )
        cout<<b[i] <<" ";

	cout<<endl <<"Complete!!";
	return 0;
}