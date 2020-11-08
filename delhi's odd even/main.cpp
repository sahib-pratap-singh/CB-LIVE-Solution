#include <iostream>

using namespace std;

int main()
{
    int n,a[100],r;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0,sum=0;
        while(a[i]>0){
        r=a[i]%10;
        if(r%2==0){
            sum=sum+r;
        }
        else{
            cnt =cnt+r;
        }
        a[i]=a[i]/10;
    }
    if(sum%4==0 or cnt%3==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}
