#include <iostream>
#define ll long long int
using namespace std;
int main() {
    ////////////brute force/////////////
    /*
    ll n;
    cin>>n;
    ll no;
    for(ll i=2;i<n;i++){
    no=i;
    ll k=2;
    while(k<no){
            if(no%k==0){
                    break;
            }
            k++;
    }
        if(no==k){
                cout<<i<<" ";
        }
    }
    */

    ///////////optimized////////////
    ll n;
    cin>>n;
    ll a[1000000]={0};
    for(ll i=3;i<1000000;i+=2){
            a[i]=1;
    }
    for(ll i=3;i<1000000;i+=2){
            if(a[i]==1){
                    for(ll j=i*i;j<1000000;j+=i){
                            a[j]=0;
                    }
            }
    }
    for(ll i=0;i<n;i++){
            if(a[i]==1){
                    cout<<i<<" ";
            }
    }
}
