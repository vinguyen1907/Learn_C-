#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct COMPLEX 
{
    int Re, Img;
};

void Input(COMPLEX (&CP_Ex)[10][10], int &m, int &n)
{
    ifstream input("D:\\CODE\\INPUT\\9_STRUCTURE_ARRAY\\696\\input.txt");
    input >>m >>n;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            input >>CP_Ex[i][j].Re;

    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            input >>CP_Ex[i][j].Img;
}

ostream &operator << (ostream &os, COMPLEX Cp_Ex)
{
    cout <<Cp_Ex.Re <<"+" <<Cp_Ex.Img <<"i" <<"    ";
}

void Output(COMPLEX CP_Ex[10][10], int m, int n)
{
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout <<setw(5) <<CP_Ex[i][j] ;
        cout <<endl;
    }
}

void First_Positive_Complex(COMPLEX Cp_Ex[10][10], int m, int n)
{
    bool flag = 0;
    for ( int i = 0; i < m; i++ ) 
    {
        for ( int j = 0; j < n; j++ )
            if ( Cp_Ex[i][j].Re > 0 && Cp_Ex[i][j].Img > 0 )
            {
                cout <<"So phuc duong dau tien la: " <<Cp_Ex[i][j];
                flag = 1;
                break;
            }
        if ( flag == 1 )
            break;
    }
}

void Last_Negative_Complex(COMPLEX Cp_Ex[10][10], int m, int n)
{
    COMPLEX save;
    int count = 0;
    for ( int i = 0; i < m; i++ ) 
        for ( int j = 0; j < n; j++ )
            if ( Cp_Ex[i][j].Re < 0 && Cp_Ex[i][j].Img < 0 )
            {
                save = Cp_Ex[i][j];
                count ++;
            }
    if (count != 0 )
        cout <<"So phuc am cuoi cung la: " <<save;
    else cout <<"Khong co so phuc am!";
}

void Opposite_Sign_Complex(COMPLEX Cp_Ex[10][10], int m, int n)
{
    int count = 0;
    for ( int i = 0; i < m; i++ ) 
        for ( int j = 0; j < n; j++ )
            if ( Cp_Ex[i][j].Re * Cp_Ex[i][j].Img < 0 )
                count ++;
    cout <<"So luong so phuc trai dau: " <<count;
}

void Complex_With_Largest_Real(COMPLEX Cp_Ex[10][10], int m, int n)
{
    int max = 0;
    COMPLEX save;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( Cp_Ex[i][j].Re > max )
            {
                max = Cp_Ex[i][j].Re;
                save = Cp_Ex[i][j];
            }
    cout <<"So phuc so phan thuc lon nhat la: " <<save;
}

int main()
{
    COMPLEX CP[10][10];
    int m, n;
    Input(CP, m, n);
    Output(CP, m, n);
    
    cout <<endl;
    First_Positive_Complex(CP, m, n);
    cout <<endl;
    Last_Negative_Complex(CP, m, n);
    cout <<endl;
    Opposite_Sign_Complex(CP, m, n);
    cout <<endl;
    Complex_With_Largest_Real(CP, m, n);

	cout<<endl <<"Complete!!";
	return 0;
}