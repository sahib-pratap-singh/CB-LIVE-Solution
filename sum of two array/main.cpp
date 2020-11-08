#include <iostream>

using namespace std;

int main()
{
    int n,m,a[1000],b[1000],c[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int larger = max(n,m);
    int no=larger;
    while(larger>=0){
        c[larger]=a[n]+b[m];
        cout<<c[larger]<<'\n';
        n--;
        m--;
        larger--;
    }

    for(int i=0;i<no;i++){
        cout<<c[i];
    }
    return 0;
}
