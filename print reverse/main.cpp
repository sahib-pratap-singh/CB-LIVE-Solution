#include <iostream>

using namespace std;

int main()
{
        int n;
    cin>>n;
    int r,rev=0;
    while(n>0){
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return 0;
}
