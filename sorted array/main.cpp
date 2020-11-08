#include <iostream>

using namespace std;
bool issorted(int a[],int n){
    bool value = false;
    bool asc =false;
    bool dec =false;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1] or a[i]==a[i+1]){
            asc = true;
            value =asc;
        }
        else if(a[i]>a[i+1]){
            dec =true;
            value =dec;
        }
         if(asc==1 and dec==1){
            value=false;
            break;
        }
    }
    return value;
}
int main()
{
    int n;
    cin>>n;
    int a[1000] ={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<< boolalpha<<issorted(a,n);
    return 0;
}
