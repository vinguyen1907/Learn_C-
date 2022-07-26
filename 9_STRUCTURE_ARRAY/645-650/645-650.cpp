#include <iostream>
using namespace std;

struct COMPLEX 
{
    int Re, Img;
};

istream &operator >> (istream &is, COMPLEX &CP_Ex)
{
    cout <<"\t NHAP SO PHUC" <<endl;
    cout <<"Re = ";
    cin >> CP_Ex.Re;
    cout <<"Img = ";
    cin >> CP_Ex.Img;
}

ostream &operator << (ostream &os, COMPLEX &CP_Ex)
{
    cout <<CP_Ex.Re <<"+" <<CP_Ex.Img <<"i";
}

COMPLEX &operator * (COMPLEX CP_Ex1, COMPLEX CP_Ex2)
{
    COMPLEX CP_Multi;
    CP_Multi.Re = CP_Ex1.Re * CP_Ex2.Re -  CP_Ex1.Img * CP_Ex2.Img;
    CP_Multi.Img = CP_Ex1.Re * CP_Ex2.Img + CP_Ex1.Img * CP_Ex2.Re;
    return CP_Multi;
}

//647
void Sum(COMPLEX CP_Ex[], int n)
{
    COMPLEX CP_Sum;
    CP_Sum.Re = 0;
    CP_Sum.Img = 0;

    for ( int i = 0; i < n; i++ )
    {
        CP_Sum.Re += CP_Ex[i].Re;
        CP_Sum.Img += CP_Ex[i].Img;
    }
    cout <<"Tong so phuc trong mang la: " <<CP_Sum <<endl;
}

//648
void Multiply(COMPLEX CP_Ex[], int n)
{
    COMPLEX CP_Multi;
    CP_Multi.Re = CP_Ex[0].Re;
    CP_Multi.Img = CP_Ex[0].Img;
    for ( int i = 1; i < n; i++ )
        CP_Multi = CP_Multi * CP_Ex[i];

    cout <<"Tich so phuc trong mang la: " <<CP_Multi <<endl;
}

//649
void First_PositiveRe(COMPLEX CP_Ex[], int n)
{
    for ( int i = 0; i < n; i++ )
        if ( ( CP_Ex[i].Re > 0 ) && ( CP_Ex[i].Img > 0 ) )
        {
            cout<<"So phuc dau tien duong la: " <<CP_Ex[i] <<endl;
            break;
        }
}

//650
void Arrange_Ascending_By_Re(COMPLEX CP_Ex[], int n)
{
    for ( int i = 0; i < n-1; i++ )
        for ( int j = i+1; j < n; j++ )
            if ( CP_Ex[i].Re > CP_Ex[j].Re )
            {
                COMPLEX temp = CP_Ex[i];
                CP_Ex[i] = CP_Ex[j];
                CP_Ex[j] = temp;
            }

    cout <<"Mang sau khi sap xep la: ";
    for ( int i = 0; i < n; i++ )
        cout <<CP_Ex[i] <<"   ";
}

int main()
{
    int size = 3;
    COMPLEX CP[size];
    for ( int i = 0; i < size; i++ )
        cin >> CP[i];
    
    for ( int i = 0; i < size; i++ )
        cout << CP[i] <<"   ";
    cout <<endl;

    Sum(CP, size);
    Multiply(CP, size);
    First_PositiveRe(CP, size);
    Arrange_Ascending_By_Re(CP, size);

	cout<<endl <<"Complete!!";
	return 0;
}