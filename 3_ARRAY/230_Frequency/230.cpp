#include <iostream>
#include <iomanip>
using namespace std;

//Hàm đếm số lần xuất hiện
int Count(int a[], int n, int x)
{
    int count = 0;
    for ( int i = 0; i < n; i++ )
        if (a[i] == x)  
            count ++;
    return count;
}


int main()
{
    const int n = 10;
    int a[n] = {1, 3, 69, 69, 79, 79, 79, 69, 0, 0};
    int b[10] = {0};    //Mảng b để lưu giá trị(chỉ 1 lần)
    int c[10] = {0};    //Mảng c để lưu số lần xuất hiện tương ứng với các phần tử mảng b
    int k = 0;  //Biến k để chỉ số phần tử mảng c

    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (int j = 0; j < k; j++)
            if (a[i] == b[j])   //Kiểm tra trong mảng b có giá trị a[i] chưa, có rồi thì đánh dấu -> bỏ qua
                flag = 1;
        if (flag == 0)      //Nếu chưa có thì dùng b lưu giá trị, dùng c lưu số lần xuất hiện
        {
            b[k] = a[i];
            c[k] = Count(a, n, a[i]);
            k ++;
        }
    }
    cout <<"Cac phan tu: ";
    for (int i = 0; i < k; i++)
        cout <<setw(4) <<b[i] <<" ";
    cout <<endl;

    cout <<"Tan suat:    ";
    for (int i = 0; i < k; i++)
        cout <<setw(4) <<c[i] <<" ";
	
	cout<<endl <<"Complete!!";
	return 0;
}
