#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int cases;
    cin>>cases;
    for(int m=0;m<cases;m++){
    int n;
    cin>>n;
    int v[1000];
    for(int i=0;i<n;i++){
            cin>>v[i];
    }
    next_permutation(v,v+n);
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
    }
}
