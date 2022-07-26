#include <iostream>
using namespace std;

void nhapmang(int (&a)[100], int &n)
{
    cout << "Nhap vao so phan tu n: ";
    cin >> n;
    cout << "Nhap vao cac phan tu cua mang: ";
    for ( int  i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
}

int vitrihoanthiencuoi(int a[100], int n)
{
    int sum;
    for (int i = n-1; i >= 0; i-- )
    {
        sum = 0;
        for  ( int j = 1; j < a[i]; j++)
            if ( a[i] % j == 0 )
                sum = sum + j;
        if ( sum == a[i]) 
            return i;
    }

    return -1;
}

int main()
{
    int a[100], n;
    nhapmang(a, n);
   
    cout <<"Vi tri so hoan thien cuoi day la:" << vitrihoanthiencuoi(a, n) + 1;
    return 0;
}