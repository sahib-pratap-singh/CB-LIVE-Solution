#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int no;
    cin>>no;
    for(int i=0;i<no;i++){
        long long int n,k;
        cin>>n;
        cin>>k;
        long long int x=n;
        if(pow(x,k) <= n){
            cout<<x;
        }
        else{
           long long int  x = 2;
            while(pow(x,k) <= n){
                x++;
            }
            cout<<x-1;
        }
    }
    return 0;
}
