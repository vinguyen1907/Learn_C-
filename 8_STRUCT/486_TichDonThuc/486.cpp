#include <iostream>
using namespace std;

struct Donthuc
{
    int heso;
    int bac;
} Donthuc1, Donthuc2, DonthucTich;

void Input(Donthuc &Donthuc)
{
    cout<<"Nhap a =";
    cin>>Donthuc.heso;
    cout<<"Nhap n = ";
    cin>>Donthuc.bac;    
}

void Output(Donthuc)
{
    cout<<DonthucTich.heso <<".x^" <<DonthucTich.bac;
}

void Process( Donthuc &)
{
    DonthucTich.bac = Donthuc1.bac + Donthuc2.bac;
    DonthucTich.heso = Donthuc1.heso * Donthuc2.heso;
}

int main()
{
    cout<<"Nhan hai don thuc dang a.x^n. \n Don thuc thuc thu nhat " <<endl;
    Input(Donthuc1);
    cout<<" Don thuc thuc thu hai" <<endl;
    Input(Donthuc2);
    Process(DonthucTich);
    Output(DonthucTich);

	cout<<endl <<"Complete!!";
	return 0;
}
