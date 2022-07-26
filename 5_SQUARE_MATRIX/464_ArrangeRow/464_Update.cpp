#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int size = 4, tg, sum = 0;
    int a[size][size] = 
    {
        
        { -1, -2 , -3 , -1 },
        { -5,  6 ,  7 , -1 },
        { 15,  9 ,  2 , -1 },
        { -1, -1 , -1 ,  0 }
    };

    //b là mảng chứa tổng từng dòng nên là độ dài là size
    //pos là mảng lưu vị trí của b
    int b[size];
    int pos[size];
    for ( int i = 0; i < size; i++ )
    {
        sum = 0;
        for ( int j = 0; j < size; j++ )
            sum += a[i][j];
        b[i] = sum;
        pos[i] = i;
    }

    for ( int i = 0; i < size-1; i++ )  
        for ( int j = i+1; j < size; j++ )
            if ( b[i] > b[j] ) 
            {
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;

                tg = pos[i];
                pos[i] = pos[j];
                pos[j] = tg;
            }
   
    for ( int i = 0; i < size; i++ )
    {
        for ( int j = 0; j < size; j++ )
            cout<<setw(5) <<a[pos[i]][j];
        cout<<endl;
    }

    cout<<endl <<"Complete!!";
	return 0;
}