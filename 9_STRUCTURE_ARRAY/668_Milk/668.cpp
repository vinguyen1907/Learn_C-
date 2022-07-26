#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Date
{
    int Day, Month, Year;
};

struct MILK
{
    char name[20];
    float weight;
    Date date;
};

istream &operator >> (istream &is, MILK &milk_Ex)
{
    cout <<"Nhap ten hop sua: ";
    cin.getline(milk_Ex.name, 20);
    cout <<"Nhap khoi luong: ";
    cin >>milk_Ex.weight;
    cout <<"Nhap ngay, thang, nam HSD: ";
    cin >>milk_Ex.date.Day >>milk_Ex.date.Month >>milk_Ex.date.Year;
    cin.ignore();
    return is;
}

ostream &operator <<(ostream &os, MILK &milk_Ex)
{
    cout <<"Ten sua: " <<milk_Ex.name <<endl;
    cout <<"Khoi luong: " <<milk_Ex.weight <<endl;
    cout <<"HSD: " <<milk_Ex.date.Day <<"/" <<milk_Ex.date.Month <<"/" <<milk_Ex.date.Year <<endl;
    return os;
}

int Convert(Date Ex)
{
    return (Ex.Year*100 + Ex.Month)*100 + Ex.Day;
}

void Check_Out_Of_Date(MILK milk_Ex[], int n)
{
    Date HSD;
    cout <<"Nhap ngay hom nay: ";
    cin >>HSD.Day >>HSD.Month >>HSD.Year;
    for ( int i = 0; i < n; i++ )
        if ( Convert(milk_Ex[i].date) < Convert(HSD) )
            cout <<"Sua het han la:" <<milk_Ex[i].name <<endl;
}

void The_Heaviest_Milk(MILK Milk_Ex[], int n )
{
    float max = 0;
    string save;
    for ( int i = 0; i < n; i++ )
        if (Milk_Ex[i].weight > max)
        {
            max = Milk_Ex[i].weight;
        }
    for ( int i = 0; i < n; i++ )
        if (Milk_Ex[i].weight == max)
            cout <<Milk_Ex[i].name <<"   ";
    cout <<endl;
}

int main()
{
    MILK milk[10]; 
    int n = 2;
    cout <<"\tNHAP THONG TIN SUA!" <<endl;
    for ( int i = 0; i < n; i++ )
    {
        cin >>milk[i];

        cout <<endl;
    }
    
    cout <<"\tTHONG TIN SUA DA NHAP:" <<endl;
    for ( int i = 0; i < n; i++ )
        cout <<milk[i] <<endl;

    cout <<"\tKIEM TRA HSD SUA." <<endl;
    Check_Out_Of_Date(milk, n);

    cout <<"\tHOP SUA NANG NHAT." <<endl;
    The_Heaviest_Milk(milk, n);

	cout<<endl <<"Complete!!";
    system("pause");
	return 0;
}