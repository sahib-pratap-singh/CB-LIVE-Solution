#include <iostream>
#include <climits>
using namespace std;
bool ispossible(int a[],int n, int m, int curr_min){
        int studentused=1;
        int pages_reading = 0;
        for(int i=0;i<n;i++){
                if(pages_reading +a[i] > curr_min){
                        studentused++;
                        pages_reading = a[i];
                        if(studentused>m){
                                return false;
                        }
                }
                else{
                        pages_reading+=a[i];
                }
        }
        return true;
}
int foundpages(int a[],int n, int m){
        if(n<m){
                return -1;
        }
        int sum=0,mid,ans=INT_MAX;
        for(int i=0;i<n;i++){
                sum+=a[i];
        }
        int s=a[n-1];
        int e=sum;
        while(s<=e){
                mid = (s+e)/2;
                if(ispossible(a,n,m,mid)){
                        ans=min(ans,mid);
                        e=mid-1;
                }
                else{
                        s=mid+1;
                }
        }
        return ans;
}
int main() {
    int cases;
    cin>>cases;
    for(int l=0;l<cases;l++){
    int m,n;
    cin>>n>>m;
    int a[1000];
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    cout<<foundpages(a,n,m)<<endl;
    }
}
