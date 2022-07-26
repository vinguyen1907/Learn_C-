#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int sizeRow_a = 2, sizeCol_a = 3;
    int a[sizeRow_a][sizeCol_a] = 
    { 
        { 1, 2, 3 },
        { 4, 5, 6 }
    };
    int sizeCol_b = 2;
    int b[sizeCol_a][sizeCol_b] = 
    { 
        { 1, 2 },
        { 3, 4 },
        { 5, 6 }
    };

    int result[sizeRow_a][sizeCol_b];
    int value;
    for (int i = 0; i < sizeRow_a; i++ )
        for ( int j = 0; j < sizeCol_b; j++ )
        { 
            value = 0;
            for ( int m = 0; m < sizeCol_a; m++ )   
                value += a[i][m] * b[m][j];
            result[i][j] = value;
        }
    
    for (int i = 0; i < sizeRow_a; i++ )
    { 
        for ( int j = 0; j < sizeCol_b; j++ )
            cout<<setw(4) <<result[i][j];
        cout<<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
