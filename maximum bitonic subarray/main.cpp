#include <iostream>

using namespace std;
int bitonicarray(int *a,int n){
    int inc[n];
    int dec[n];
    int maxa;
    inc[0]=1;
    dec[n-1]=1;
    for(int i=1;i<n;i++){
        inc[i] = (a[i]>=a[i-1])?inc[i-1]+1:1;
    }
    for(int i=n-2;i>=0;i--){
        dec[i] = (a[i]>=a[i+1])?dec[i+1]+1:1;
    }
    maxa = inc[0]+dec[0]-1;
    for(int i=n-1;i>=0;i--){
        if(inc[i]+dec[i]-1 > maxa){
            maxa = inc[i]+dec[i]-1;
        }
    }
    return maxa;
}
int main()
{
    int k;
    cin>>k;
    for(int m=k;m>0;m--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<bitonicarray(a,n)<<endl;
    }
    return 0;
}
