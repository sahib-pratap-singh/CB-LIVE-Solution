#include <iostream>
using namespace std;
int main() {
    int no,ans,value;
    cin>>no;
    int a[no];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    for(int i=0;i<no;i++){
            ans = a[i];
            value=0;
            while(ans>0){
                    if((ans & 1)>0){
                            value++;
                    }
                    ans = ans>>1;
            }
            cout<<value<<endl;
    }
}
