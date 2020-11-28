#include <iostream>
using namespace std;
int gcd(long long int a,long long int b){
        if(b==0){
                return a;
        }
        long long int ans=gcd(b,a%b);
        return ans;
}
int main() {
    long long int a,b;
    cin>>a>>b;
    long long int hcf=gcd(a,b);
    long long int lcm=(a*b)/hcf;
    cout<<lcm<<endl;
}
