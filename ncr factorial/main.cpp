#include <iostream>

using namespace std;
int factno(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncrfact(int n,int r){
    return factno(n)/(factno(r)*factno(n-r));
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncrfact(n,r);
    return 0;
}
