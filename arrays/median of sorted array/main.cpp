#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int no;
    cin>>no;
    int a[100],b[100];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    for(int i=0;i<no;i++){
            cin>>b[i];
    }
    int ar_sz=2*no;
    int c[ar_sz];
    for(int i=0;i<(ar_sz/2);i++){
            c[i]=a[i];
    }
    int x=0;
    for(int i=(ar_sz/2);i<ar_sz;i++){
            if(x<no){
            c[i]=b[x];
            x++;
            }
    }
    sort(c,c+ar_sz);
    int mid = (ar_sz/2)-1;
    int ans = (c[mid]+c[mid+1])/2;
    cout<<ans;
}
