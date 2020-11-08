#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=1;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
