#include <iostream>
using namespace std;
int main() {
    int a,b,max=0,ans;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        ans = i ^ i+1;
        if(ans>max){
                max=ans;
        }
    }
    if((a^a)>max){
            max = (a^a);
    }
    else if((b^b)>max){
            max = (b^b);
    }
    cout<<max;
}
