#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int k=n;k>0;k--){
        int m;
        cin>>m;
         int a[100];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int largest = INT_MIN;
        for(int start=0;start<m;start++){
            int sum=0;
            for(int endp=start;endp<m;endp++){
                for(int l=start;l<endp;l++){
                    sum=sum+a[l];
                }
            }
            if(sum>largest){
                largest=sum;
            }
        }
        cout<<largest<<endl;
    }
}
