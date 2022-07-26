#include <iostream>
#include <fstream>
using namespace std;

//Code bao gồm Nạp chồng toán tử +, << , >> số phức

struct Complex
{
    int Re, Img;
};

//Nạp chồng toán tử >> để đọc số phức
istream &operator >> (istream &is, Complex &CP)
{
    cout << "Input Re of Complex Number = ";
    is >> CP.Re;         //cin vẫn được nhưng is được cả nhập và file còn cin chỉ là nhập
    cout << "Input Img of Complex Number = ";
    is >> CP.Img; 
    return is;
}

//Nạp chồng toán tử + để cộng trực tiếp số phức
Complex operator + (Complex CP_Ex1, Complex CP_Ex2)
{
    Complex temp;
    temp.Re = CP_Ex1.Re + CP_Ex2.Re;
    temp.Img = CP_Ex1.Img + CP_Ex2.Img;
    return temp;
}

//Nạp chồng toán tử << để xuất số phức
ostream &operator << (ostream &os, Complex CP)
{
    os <<CP.Re <<" + " <<CP.Img <<"i";
    return os;
}

int main()
{
    Complex CP_1, CP_2, CP_Add;
    cout << "\tINPUT 1ST COMPLEX NUMBER: " << endl;
    cin>>CP_1;
    cout << "\tINPUT 2ND COMPLEX NUMBER: " << endl;
    cin>>CP_2;
    cout <<"==> Sum of 2 Complex Numbers is : " <<CP_1+CP_2;

	cout<<endl <<"Complete!!";
	return 0;
}
