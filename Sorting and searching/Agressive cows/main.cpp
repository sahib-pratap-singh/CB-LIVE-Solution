#include <bits/stdc++.h>
using namespace std;
bool cowrakhpaye(long long int stall[],long long int n_stall,long long int cow,long long int min_cnt){
        long long int first_cow = stall[0];
        long long int cnt=1;
        for(int i=1;i<n_stall;i++){
                if(stall[i]-first_cow>=min_cnt){
                        cnt++;
                        first_cow=stall[i];
                        if(cnt==cow){
                                return true;
                        }
                }
        }
        return false;
}
int main() {
    long long int n_stall,cow;
    cin>>n_stall>>cow;
    long long int stall[n_stall];
   // int stall[]={1,2,4,8,9};
    for(int i=0;i<n_stall;i++){
            cin>>stall[i];
    }
    sort(stall,stall+n_stall);
    long long int s=0;
    long long int e=stall[n_stall-1];
    //cout<<e<<endl;
    long long int ans=0;
    while(s<=e){
            long long int mid=(s+e)/2;
            if(cowrakhpaye(stall,n_stall,cow,mid)){
                    ans = mid;
                    s=mid+1;


            }
            else{
                    e=mid-1;
            }
    }
    cout<<ans<<endl;
}
