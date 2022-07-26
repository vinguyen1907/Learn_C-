#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main()
{
    int n, m;
    ifstream input("D:\\CODE\\INPUT\\11_POINTER\\3.txt");
    input >>n;
    int *a = new int[n];
    for ( int i = 0; i < n; i++ )
    {
        input >>a[i];
        cout <<a[i] <<"   ";
    }

    cout <<endl;
    input >>m;
    int *b = new int[m];
    for ( int i = 0; i < m; i++ )
    {
        input >>b[i];
        cout <<b[i] <<"   ";
    }
    
    int *c = new int[m+n];
    int k = 0;
    for ( int i = 0; i < n; i++ )
    {
        c[k] =a[i];
        k++;
    }
    for ( int i = 0; i < m; i++ )
    {
        c[k] = b[i];
        k++;
    }

    cout <<endl;
    for ( int i = 0; i < k; i++ )
        cout <<c[i] <<"   ";
	
	cout<<endl <<"Complete!!";
	return 0;
}
