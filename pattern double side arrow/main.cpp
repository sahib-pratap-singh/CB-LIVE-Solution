#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n-1;
    int q=1;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=m;j>0;j--){
            cout<<" "<<" ";
        }
        m-=2;
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        if(i==1){
            cout<<" "<<" "<<endl;
        }
        else{
           /* for(int j=1;j<=i;j++){
            cout<<" ";
            } */
            for(int j=q;j>0;j--){
            cout<<" "<<" ";
            }
            q+=2;
            for(int j=1;j<=i;j++){
            cout<<j<<" ";
            }
            cout<<endl;
        }

    }
     m=n-1;
     q-=4;
     int l=2;
     int s=(n+1)/2;
    for(int i=1;i<=(n+1)/2 -1;i++){
        for(int j=l;j>0;j--){
            cout<<" "<<" ";
            }
            l+=2;
        for(int j=s-1;j>0;j--){
            cout<<j<<" ";
        }

        for(int j=q;j>0;j--){
            cout<<" "<<" ";
        }
        q-=2;
        if((s-1)==1){
            cout<<" "<<" ";
        }
        else{
            for(int j=1;j<=s-1;j++){
            cout<<j<<" ";
            }
        }
        s--;
        cout<<endl;
    }
    return 0;
}
