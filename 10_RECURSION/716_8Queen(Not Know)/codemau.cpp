#include<stdio.h>
#include<math.h>
int a[20];
bool Ok(int x2,int y2){
    //kiểm tra cách đặt có thỏa mãn không
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    //Nếu kiểm tra hết các trường hợp vẫn không sai thì trả về true
    return true;
}
 
void Xuat(int n){
    //in ra một kết quả
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        // thử đặt quân hậu vào các cột từ 1 đến n
        if(Ok(i,j)){
            //nếu cách đặt này thỏa mãn thì lưu lại vị trí
            a[i] = j;
                        //nếu đặt xong quân hậu thứ n thì xuất ra một kết quả
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;// ở đây mình cho bài toán là 8 quân hậu trên bàn 8*8
    Try(1,n);
    return 0;
}