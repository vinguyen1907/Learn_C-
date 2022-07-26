#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int size = 4, tg, x, y;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        { 15,  9 ,  2 , -1 },
        { -1, -1 , -1 , 0 }
    };

    cout<<"Input order of 2 rows: ";
    cin>>x >>y;

    for ( int j = 0; j < size; j++ )
    {
        tg = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = tg;
    }

    for ( int i = 0; i < size; i++ )
    {
        for ( int j = 0; j < size; j++ )
            cout<<setw(5) <<a[i][j]<<" ";
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
