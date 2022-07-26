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

//Hàm Realloc tăng giảm ô nhớ
void Realloc(int *&a, int old_size, int new_size)
{
    //Tạo mảng b, sao mảng a qua 
    int *b = new int[old_size];
    for ( int i = 0; i < old_size; i++ )
        b[i] = a[i];
    //Giải phóng vùng nhớ mảng a
    delete[] a;
    //Cấp phát lại vùng nhớ mảng a với n ô nhớ mới *Lưu ý: chỉ cấp phát lại vùng nhớ chứ không tạo mới bằng int *a = new int[n]; 
    a = new int[new_size];
    for ( int i = 0; i < old_size; i++ )
        a[i] = b[i];
    delete[] b;
}

//Thuật toán thêm mảng động
void Add(int *&a, int &n, int vt, int x) //Vì cấp phát lại vùng nhớ nên phải &a
{
    Realloc(a, n, n+1);
    n ++;
    for ( int i = n-1; i >= vt+1; i-- )
        a[i] = a[i-1];
    a[vt] = x;
    
}

//Thuật toán xóa giá trị tại vị trí vt
void Delete(int *&a, int &n, int vt)
{
    for ( int i = vt; i < n-1; i++ )
        a[i] = a[i+1];
    Realloc(a, n, n-1);
    n --;
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
