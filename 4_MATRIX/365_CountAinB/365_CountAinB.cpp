#include <iostream>
#include <math.h>
using namespace std;

#define M 100
const int ma = 2, na = 2;
const int mb = 4, nb = 4;
bool Check ( int arrA[][na], int arrB[][nb], int aRow, int aCol, int xRow, int xCol )
{
    for ( int i = xRow, m = 0; m < aRow; i++, m++ )
        for ( int j = xCol, n = 0; n < aCol; j++, n++ )
            if ( arrB[i][j] != arrA[m][n] )
                return false;
    return true;
}

int main()
{
  
    int A[ma][na]=
    {
        { 1, 2 },
        { 3, 4 }
    };
    int B[mb][nb]=
    {
        { 1, 1, 1 ,2 },
        { 3, 4 ,3, 4 },
        { 1, 2, 1 ,2 },
        { 3, 4 ,3, 4 },
    };
    int count = 0;
    for ( int i = 0; i < mb; i++ )
        for ( int j = 0; j < nb; j++ )
             if ( A[0][0] == B[i][j] )
                if ( Check(A, B, ma, na, i, j ) == true ) 
                    count++;
    cout<<count;
                

	cout<<endl <<"Complete!!";
	return 0;
}
