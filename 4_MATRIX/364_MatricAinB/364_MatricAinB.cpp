#include <iostream>
#include <math.h>
using namespace std;

#define M 100
const int ma = 2, na = 3;
const int mb = 3, nb = 4;
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
        { 1, 2, 3 },
        { 5, 6 ,7 }
    };
    int B[mb][nb]=
    {
        { 1, 2, 3 ,4 },
        { 5, 6 ,7, 8 },
        { 9, 0, 5 ,6 }
    };

    for ( int i = 0; i < mb; i++ )
        for ( int j = 0; j < nb; j++ )
             if ( A[0][0] == B[i][j] )
                if ( Check(A, B, ma, na, i, j ) == true ) 
                    cout<<1;
                else cout<<0;
                

	cout<<endl <<"Complete!!";
	return 0;
}
