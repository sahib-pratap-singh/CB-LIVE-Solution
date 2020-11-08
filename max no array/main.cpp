#include <iostream>
#include <climits>
using namespace std;
void maxno(int *a,int i,int n){
    int mx= INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
        mx=a[i];
    }
    }
    cout<<mx;
}
int main() {
    int n;
    cin>>n;
    int a[1000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maxno(a,0,n);
}
