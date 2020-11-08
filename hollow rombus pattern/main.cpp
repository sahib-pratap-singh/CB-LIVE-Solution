#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-2;
    for(int j=0;j<n-2;j++){
        for(int i=0;i<m;i++){
        cout<<" ";
        }
        cout<<"*";
        for(int i=0;i<(n+1)/2;i++){
            cout<<" ";
        }
        m--;
        cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    return 0;
}
