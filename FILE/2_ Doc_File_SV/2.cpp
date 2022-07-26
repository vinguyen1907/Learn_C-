#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

struct Pupil_Informations
{
    string name;
    string mssv;
    string date_of_birth;
    float mark;
};

void Output(Pupil_Informations PI)
{
    cout <<"Ho ten: " <<PI.name <<endl;
    cout <<"MSSV: " <<PI.mssv <<endl;
    cout <<"Ngay sinh: " <<PI.date_of_birth <<endl;
    cout <<"Diem trung binh: " <<PI.mark <<endl <<endl;
}

int main()
{
    Pupil_Informations PI[10];
    int k = 0; //so sinh vien
    ifstream input;
    input.open("D:\\CODE\\INPUT\\13_FILE\\2. Doc_File_Sinh_Vien\\Input.txt");
    while ( !input.eof() )
    {
        getline(input, PI[k].name, ',');
        //input.seekg(1, 1); //Dịch con trỏ qua 1 byte(1 kí tự, tại vị trí 1) để bỏ qua dấu cách trước MSSV
        getline(input, PI[k].mssv, ',');
        //input.seekg(1, 1);
        getline(input, PI[k].date_of_birth, ',');
        input >> PI[k].mark;    //Lưu ý sau điểm còn 1 kí tự \n
        //Loại bỏ kí tự \n
        string temp;
        getline(input, temp);
        k ++;
    }
    cout <<"\tTHONG TIN CAC SINH VIEN:" <<endl;
    for ( int i = 0; i < k; i++ )
        Output(PI[i]);
        
    string search;
    cout <<"Nhap ten sinh vien can tim: ";
    getline(cin, search);
    cout <<endl <<"\tTHONG TIN SINH VIEN CAN TIM LA:" <<endl;
    for ( int i = 0; i < k; i++ )
        if ( stricmp( PI[i].name.c_str(), search.c_str()) == 0 )
            Output(PI[i]);

	cout<<endl <<"Complete!!";
	return 0;
}
