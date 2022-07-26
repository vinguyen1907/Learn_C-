#include <iostream>
using namespace std;
int main()
{
    int s,socach=0,tien;
    cout<<"Nhap so tien can chia: ";
    cin>>tien;
    for (int i=tien/1000;i>=0;--i)
    {
        s=tien-i*1000;
        for (int j=0;j<=tien/2000;++j)
        {
            s=s-j*2000;
            for (int k=0;k<=tien/5000;++k)
                {
                    s=s-k*5000;
                    if (i*1000+j*2000+k*5000==tien)
                    {
                        ++socach;
                        cout<<"Cach thu " <<socach <<" la: " <<i <<" to 1000 + " <<j <<" to 2000 + " <<k <<" to 5000" <<endl;
                    }
                }
        } 
    }  
    cout<<"so cach la " <<socach;
	return 0;
}
