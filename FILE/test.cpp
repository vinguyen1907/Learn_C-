#include <iostream>
using namespace std;

void nhapmang(int (&a)[100], int &n)
{
    n = 5;
    a[0] = 4;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 8;
}

bool Check_Prime_Number(int n)
{
    if ( n < 2 )
        return 0;
    else 
        for ( int i = 2; i < sqrt(n))
}

int nguyentolonnhat( int a[100], int n)
{
    
    int max;
    for ( int i = 0; i < n ; i++)
    {
        int count =0;
        for ( int j = 0 ; j < n; j++)
        {
           if ( a[i] % j == 0) count++; 
        }
        if (count == 0 ) 
    
            a[i] = max;
            
        
        
        cout << max;
    }
    
        
    for ( int m = 0; m < n; m++)
    {
        int count = 0;
        for (int k = 1 ; k < n ; k++)
        {
            if ( a[m] % k == 0) count++;

        }
        if (count == 0 && a[m] > max ) max = a[m];
    }
    return max;
    
    return 0;
}

int main()
{
    
    int a[100];
    int n;
    nhapmang(a, n);
    cout << "So nguyen to lon nhat la: ";
    cout << nguyentolonnhat(a, n);
    return 0;
}