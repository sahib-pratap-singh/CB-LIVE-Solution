#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,cnt=0,r,re,sum=0;
    cin>>n;
    int final_no=n;
    int no=n;
    while(n>0){
        r=n%10;
        cnt++;
        n=n/10;
    }
    while(no>0){
        re=no%10;
        sum=sum+pow(re,cnt);
        no=no/10;
    }
    if(sum==final_no){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
