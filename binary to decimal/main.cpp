#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,r,cnt=0,sum=0;
    cin>>n;
    while(n>0){
        r=n%10;
        sum+= pow(2,cnt) *r;
        cnt++;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
