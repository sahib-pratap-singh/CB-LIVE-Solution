#include <iostream>
#include <climits>
using namespace std;
void maximum(int k,int &largest){
    int m;
        cin>>m;
         int a[100];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int start=0;start<m;start++){
            int sum=0;
            for(int end=start;end<m;end++){
                sum=sum+a[end];
            }
            if(sum>largest){
                largest=sum;
            }
        }
}
int main() {
    int n;
    int largest= INT_MIN;
    cin>>n;
    for(int k=n;k>0;k--){
         maximum(k,largest);
        cout<<largest<<endl;
    }
}
