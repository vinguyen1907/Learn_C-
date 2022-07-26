#include <iostream>
#include <math.h>
using namespace std;

void Input(int *a, int &n)
{
    cout <<"Nhap n = ";
    cin >>n;
    for ( int i = 0; i < n; i++ )
    {
        cout << "Nhap a[" <<i <<"]" <<"= ";
        cin >>a[i];
    }
}

void Output(int *a, int n)
{
    for ( int i = 0; i < n; i++ )
        cout <<a[i] <<"    ";
}

//Thuật toán thêm mảng động
void Add(int *&a, int &n, int vt, int x) //Vì cấp phát lại vùng nhớ nên phải &a
{
    //Tạo mảng b, sao mảng a qua 
    int *b = new int[n];
    for ( int i = 0; i < n; i++ )
        b[i] = a[i];
    //Giải phóng vùng nhớ mảng a
    delete[] a;
    //Tăng số phần tử mảng lên
    n ++;
    //Cấp phát lại vùng nhớ mảng a với n ô nhớ mới *Lưu ý: chỉ cấp phát lại vùng nhớ chứ không tạo mới bằng int *a = new int[n]; 
    a = new int[n];
    //Thêm giá trị x vào vị trí vt
    for ( int i = 0; i < vt; i++ )
        a[i] = b[i];
    a[vt] = x;
    for ( int i = vt+1; i < n; i++ )
        a[i] = b[i-1];
    //Giải phóng vùng nhớ mảng b
    delete[] b;
}

//Thuật toán xóa giá trị tại vị trí vt
void Delete(int *&a, int &n, int vt)
{
    int *b = new int[n]; 
    for ( int i = 0; i < n; i++ )
        b[i] = a[i];
    delete[] a;
    n --;
    a = new int[n];
    for ( int i = 0; i < vt; i++ )
        a[i] = b[i];
    for ( int i = vt; i < n; i++ )
        a[i] = b[i+1];
    delete[] b;
}


int main()
{
    int n;
    int *a = new int[n];
    Input(a, n);
    int vt = 2, x = 100;
    Add(a, n, vt, x);
    Output(a, n); cout <<endl;
    Delete(a, n, vt);
    Output(a, n);
	
	cout<<endl <<"Complete!!";
	return 0;
}
