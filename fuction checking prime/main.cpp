#include <iostream>

using namespace std;
void checkprime(int n){
    for(int x=2;x<=n;x++){
        int i=2;
        while(i<x){
        if(x%i==0){
            break;
        }
        i++;
        }
        if(x==i){
            cout<<x<<" ";
        }

    }
}
int main()
{
    int n;
    cin>>n;
    checkprime(n);
    return 0;
}
