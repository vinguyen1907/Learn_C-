#include <iostream>
using namespace std;

int main()
{
    system("cls");
    const int n = 9;
    int count = 0, count_temp;
    int a[n] = { 1, 1, 2, 3, 4, 5, 6, 5, 6};

    for ( int i = 0; i < n; i++ )
    {
        count_temp = 0;
        for ( int j = 0; j < n; j++ )
            if (a[i] == a[j])
                count_temp ++;
        if (count_temp == 1)
            count ++;
    }
    cout <<"So phan tu ko trung la: " <<count;


    cout <<endl <<"Complete!!";
    return 0;
}