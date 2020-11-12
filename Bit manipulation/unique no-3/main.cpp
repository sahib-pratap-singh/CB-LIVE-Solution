#include <iostream>
using namespace std;
int main() {
    int no;
    cin>>no;
    int values;
    int cnt[64]={0};
    for(int i=0;i<no;i++){
            cin>>values;
            int j=0;
            while(values>0){
                    //int j=0;
                    int last_bit=(values&1);
                    cnt[j]+=last_bit;
                    j++;
                    values=values>>1;
            }
    }
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++){
            cnt[i] %=3;
            ans += (cnt[i]*p);
            p=p<<1;
    }
    cout<<ans;
}
