#include <iostream>
#include <math.h>
using namespace std;

struct Dathuc
{
    int heso[100];
    int bac;
} Dathuc1, Dathuc2, DathucHieu;

void Input(Dathuc &Dathuc_Ex)
{
    cout<<"Bac da thuc = ";
    cin>>Dathuc_Ex.bac;
    for ( int i = 0; i < Dathuc_Ex.bac; i++ )
    {
        cout<<"He so cua x^" <<Dathuc_Ex.bac-i <<" = ";
        cin>>Dathuc_Ex.heso[i];
    }
    cout<<"He so tu do = ";
    cin>>Dathuc_Ex.heso[Dathuc_Ex.bac];
}

void Hieu( Dathuc &)
{
    int lech = abs( Dathuc1.bac - Dathuc2.bac );
    if ( Dathuc1.bac >= Dathuc2.bac )
    {
        DathucHieu.bac = Dathuc1.bac;
        for ( int i = 0; i <= Dathuc2.bac; i++ )
            DathucHieu.heso[i] = Dathuc1.heso[i+lech] - Dathuc2.heso[i];  
    }
    if ( Dathuc1.bac < Dathuc2.bac )
    {
        DathucHieu.bac = Dathuc2.bac;
        for ( int i = 0; i <= Dathuc1.bac; i++ )
            DathucHieu.heso[i] = Dathuc1.heso[i] - Dathuc2.heso[i+lech];
    }
}

void Output( Dathuc Dathuc_Ex )
{
    for ( int i = 0; i < Dathuc_Ex.bac-1; i++ )
        cout<<Dathuc_Ex.heso[i] <<".x^" <<Dathuc_Ex.bac-i <<" + ";
    cout<<Dathuc_Ex.heso[Dathuc_Ex.bac-1] <<"x" <<" + ";
    cout<<Dathuc_Ex.heso[Dathuc_Ex.bac];

}

int main()
{
    cout<<"Hieu hai da thuc" <<endl;
    cout<<"Da thuc thu nhat:" <<endl;
    Input(Dathuc1);
    Input(Dathuc2);
    Hieu(DathucHieu);
    Output(DathucHieu);

	cout<<endl <<"Complete!!";
	return 0;
}
