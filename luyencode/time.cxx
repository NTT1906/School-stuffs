// By: https://duongdinh24.com/

#include<iostream>
#include<time.h>   // Thư viện thời gian
using namespace std;

// tinh N giai thua su dung de quy
int factorial(int n){
    if(n==1)
        return 1;
    return(n*factorial(n-1));
}

int main(){
    int n;    
        cout<<"Nhap n: ";
    cin>>n;
    clock_t start, end;   // Khai báo biến thời gian
        double time_use;      // Thời gian sử dụng

    start = clock();     // Lấy thời gian trước khi thực hiện thuật toán
    cout<<"Giai thua cua "<<n<<" la: "<<factorial(n)<<endl;   // Thực hiện thuật toán
    end = clock();  // lấy thời gian sau khi thực hiện 
    time_use = (double)(end - start) / CLOCKS_PER_SEC;    //Tính thời gian sử dụng
    cout<<"Thoi gian chay factorial(n): "<<time_use;
    return 0;
}