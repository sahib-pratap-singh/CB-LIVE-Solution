#include <iostream>
using namespace std;

int main() {
    long long int n,m,x,y;
    cin>>n>>m>>x>>y;
    long long int s=0;
    long long int e=n;
    long long int ans=0;
    while(s<=e){
            long long int mid=(s+e)/2;
            if((mid*x)<=(m+(n-mid)*y)){
                    ans=mid;
                    s=mid+1;
            }
            else{
                    e=mid-1;
            }
    }
    cout<<ans<<endl;
}
