#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int a[n],sim[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0,sum=0;
        while(a[i]>0){
            r=a[i]%10;
            sum+= pow(2,cnt) *r;
            cnt++;
            a[i]=a[i]/10;
        }
        sim[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<sim[i]<<endl;
    }
    return 0;
}
