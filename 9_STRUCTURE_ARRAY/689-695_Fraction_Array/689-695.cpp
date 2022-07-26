#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

struct Fraction 
{
    int tu, mau;
};

void Input (Fraction (&Frac)[10][10], int &m, int &n)
{
    ifstream input("D:\\CODE\\INPUT\\9_STRUCTURE_ARRAY\\689\\input.txt");
    input >>m >>n;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            input >>Frac[i][j].tu;

    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            input >>Frac[i][j].mau;
}

void Output (Fraction Frac[10][10], int m, int n)
{
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout <<Frac[i][j].tu <<"/" <<Frac[i][j].mau <<"    ";
        cout <<endl;
    }
}

float Value(Fraction Frac)
{
    return (float)Frac.tu/Frac.mau;
}

void Largest_Fraction(Fraction Frac[10][10], int m, int n)
{
    float max = 0;
    Fraction save;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( Value(Frac[i][j]) > max )
            {
                max = Value(Frac[i][j]);
                save = Frac[i][j];
            }
    cout <<"Phan so lon nhat la:" <<save.tu <<"/" <<save.mau <<endl;
}

void Largest_Negative_Fraction (Fraction Frac[10][10], int m, int n)
{
    float max = -10000000;
    Fraction save;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( Value(Frac[i][j]) > max && Value(Frac[i][j]) < 0 )
            {
                max = Value(Frac[i][j]);
                save = Frac[i][j];
            }
    cout <<"Phan so am lon nhat la:" <<save.tu <<"/" <<save.mau <<endl;
}

int GCD(int a, int b)

{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        if ( a < b )
            b = b - a;
    }
    return a;
}

void Simply_Fraction(Fraction Frac[10][10], int m, int n)
{
    cout <<"\tNHUNG PHAN SO TOI GIAN LA: \n";
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( GCD(Frac[i][j].tu, Frac[i][j].mau) == 1 ) 
                cout <<Frac[i][j].tu <<"/" <<Frac[i][j].mau <<"   ";
    cout <<endl;
}

void Arrange(Fraction Frac[10][10], int m, int n)
{
    Fraction Frac_1[100], temp;
    int k;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
        {
            Frac_1[k] = Frac[i][j];
            k ++;
        }

    for ( int i = 0; i < k-1; i++ )
        for ( int j = i+1; j < k; j++ )
            if ( Value(Frac_1[i]) > Value(Frac_1[j]) )
            {
                temp = Frac_1[i];
                Frac_1[i] = Frac_1[j];
                Frac_1[j] = temp;
            }

    k = 0;
    cout <<"\tMA TRAN SAU KHI SAP XEP:\n";
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            cout <<Frac_1[k].tu <<"/" <<Frac_1[k].mau <<"   ";
            k ++;
        }
        cout <<endl;
    }
}

int main()
{
    Fraction Frac[10][10];
    int m, n;
    Input(Frac, m, n);
    Output(Frac, m, n);
    Largest_Fraction(Frac, m, n);
    Largest_Negative_Fraction(Frac, m, n);
    Simply_Fraction(Frac, m, n);
    Arrange(Frac, m, n);

	cout<<endl <<"Complete!!";
	return 0;
}