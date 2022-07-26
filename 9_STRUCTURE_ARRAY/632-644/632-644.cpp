#include <iostream>
#include <fstream>
using namespace std;

struct FRACTION 
{
	int Tu, Mau;
};

istream &operator >> (istream &is, FRACTION &Frac_Ex)
{
	cout <<"\t NHAP PHAN SO " <<endl;
	cout << "Nhap tu so: ";
	cin >>Frac_Ex.Tu;
	cout <<"Nhap mau so: ";
	cin >>Frac_Ex.Mau;
    return is;
}

ostream &operator << (ostream &os, FRACTION Frac_Ex)
{
    cout<<Frac_Ex.Tu <<"/" <<Frac_Ex.Mau;
}

float Value_Of_Fraction(FRACTION Frac_Ex)
{
    return (float)Frac_Ex.Tu / Frac_Ex.Mau;
}



//634
void  Count_Positive_Fraction(FRACTION Frac_Ex[], int n)
{
    int count = 0;
    for ( int k = 0; k < n; k++ )
        if ( Frac_Ex[k].Tu * Frac_Ex[k].Mau > 0 )
            count ++;
    cout <<"So phan so duong la: " <<count <<endl;
}

//625
void  Count_Negative_Fraction(FRACTION Frac_Ex[], int n)
{
    int count = 0;
    for ( int k = 0; k < n; k++ )
        if ( Frac_Ex[k].Tu * Frac_Ex[k].Mau < 0 )
            count ++;
    cout <<"So phan so am la: " <<count <<endl;
}

//636
void Find_Max_Fraction(FRACTION Frac_Ex[], int n)
{
    int max = -10000000;
    FRACTION save;
    for ( int i = 0; i < n; i++ )
        if ( (Frac_Ex[i].Tu / Frac_Ex[i].Mau) > max )
        {
            max = Frac_Ex[i].Tu / Frac_Ex[i].Mau;
            save = Frac_Ex[i];
        }
    cout <<"Phan so lon nhat la " <<save <<endl;
}

//639
void First_Positive_Fraction(FRACTION Frac_Ex[], int n)
{
    int count = 0;
    FRACTION save;
    for ( int i = 0; i < n; i++ )
        if ( (Frac_Ex[i].Tu * Frac_Ex[i].Mau) > 0 )
        {
            count ++;
            save = Frac_Ex[i];
        }
    if ( count > 0 )
    cout <<"Phan so duong dau tien la " <<save <<endl;
    else cout <<0 <<"/" <<1<<endl;
}

//643
void Arrange_Ascending(FRACTION (&Frac_Ex)[100], int n)
{
    FRACTION temp;
    for ( int i = 0; i < n-1; i++ )
        for ( int j = i+1; j < n; j++ )
            if ( Value_Of_Fraction(Frac_Ex[i]) > Value_Of_Fraction(Frac_Ex[j]) )
            {
                temp = Frac_Ex[i];
                Frac_Ex[i] = Frac_Ex[j];
                Frac_Ex[j] = temp;
            }
    
    cout <<"Sap xep tang dan: ";
    for ( int i = 0; i < n; i++ )
        cout <<Frac_Ex[i] <<"   ";
}

int main()
{
    int size = 3;
    FRACTION Frac[100];
    for ( int k = 0; k < size; k++ )
    {
        cin>>Frac[k];
        //cout <<Value_Of_Fraction(Frac[k]);
    }

    Count_Positive_Fraction(Frac, size);
    Count_Negative_Fraction(Frac, size);
    Find_Max_Fraction(Frac, size);
    First_Positive_Fraction(Frac, size);
    Arrange_Ascending(Frac, size);

	cout<<endl <<"Complete!!";
	return 0;
}