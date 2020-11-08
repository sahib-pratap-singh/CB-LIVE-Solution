#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //first component
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    //second lint
    int m=1;
    for(int x=n;x>=5;x-=2){
        for(int i=0;i<x/2;i++){
        cout<<"*";
        }
        for(int i=0;i<m;i++){
            cout<<" ";
        }
        for(int i=0;i<x/2;i++){
            cout<<"*";
        }
        m+=2;
        cout<<endl;
    }

    //third line
    cout<<"*";
    for(int i=1;i<n-1;i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    //4th
    m-=2;
    for(int x=5;x<=n;x+=2){
        for(int i=0;i<x/2;i++){
        cout<<"*";
        }
        for(int i=0;i<m;i++){
            cout<<" ";
        }
        for(int i=0;i<x/2;i++){
            cout<<"*";
        }
        m-=2;
        cout<<endl;
    }

    //5th
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    return 0;
}
