#include <iostream>

using namespace std;

int main()
{
    int no,cnt0=0,cnt1=0,cnt2=0,a[10000];
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>a[i];
        if(a[i]==0){
            cnt0++;
        }
        else if(a[i]==1){
            cnt1++;
        }
        else if(a[i]==2){
            cnt2++;
        }
        else{
            return 0;
        }
    }
    for(int i=0;i<cnt0;i++){
        cout<< 0<<endl;
    }
    for(int i=0;i<cnt1;i++){
        cout<< 1<<endl;
    }
    for(int i=0;i<cnt2;i++){
        cout<< 2<<endl;
    }
    return 0;
}
