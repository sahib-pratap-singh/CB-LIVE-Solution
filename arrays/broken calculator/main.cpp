#include <iostream>
using namespace std;
int multiply(int x,int arr[],int arr_size);
void factorial(int no){
        int arr[1500];
        int arr_size;
        arr[0] = 1;
        arr_size = 1;
        for(int x=2;x<=no;x++){
                arr_size = multiply(x,arr,arr_size);
        }
        for(int i=arr_size-1;i>=0;i--){
                cout<<arr[i];
        }
}
int multiply(int x,int arr[],int arr_size){
        int carry = 0;
        for(int i=0;i<arr_size;i++){
                int prd = arr[i]*x + carry;
                arr[i] = prd%10;
                carry = prd/10;
        }
        while(carry){
                arr[arr_size] = carry%10;
                carry = carry/10;
                arr_size++;
        }
        return arr_size;
}
int main() {
    int no;
    cin>>no;
    factorial(no);
}
