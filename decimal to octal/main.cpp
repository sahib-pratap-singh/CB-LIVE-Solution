#include <iostream>

using namespace std;

int main()
{
    int n,r,a[100],i=0,x;
    cin>>n;
    while(n>0){
        r=n%8;
        a[i]=r;
        i++;
        n=n/8;
    }
    for(x=i-1;x>=0;x--){
        cout<<a[x];
    }
    return 0;
}
