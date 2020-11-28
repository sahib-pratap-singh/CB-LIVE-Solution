#include <iostream>
#define ll long long int
using namespace std;
int main() {
     int p[1000000]={0};
    for(ll i=3;i<1000000;i+=2){
            p[i]=1;
    }
    for(ll i=3;i<100000;i+=2){
            if(p[i]==1){
                    for(ll j=i*i;j<1000000;j+=i){
                            p[j]=0;
                    }
            }
    }
    p[2]=1;
    p[0]=p[1]=0;
     int cum_sum[1000000]={0};
    for(ll i=1;i<1000000;i++){
            cum_sum[i]=cum_sum[i-1]+p[i];
    }
     ll cases;
    cin>>cases;
    for(ll i=0;i<cases;i++){
             ll no1,no2;
            cin>>no1>>no2;
            cout<<cum_sum[no2] - cum_sum[no1-1]<<endl;
    }
}
