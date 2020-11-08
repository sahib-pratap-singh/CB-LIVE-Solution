#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int m=k;m>0;m--){
    int n;
    cin>>n;
    int cs=0; //cumulative sum
    int ms=0; //maximum sum
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cs+=a[i];
        if(cs<0){
            cs=0;
        }
        ms=max(ms,cs);
    }
    cout<<ms<<endl;
    }
    return 0;
}
