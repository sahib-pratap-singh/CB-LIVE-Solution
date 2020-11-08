#include <iostream>

using namespace std;
int func(int n1,int n2){
    int q=1;
    for(int i=0;i<n1;i++){
        while(q>0){
            int c=(3*q)+2;
            q++;
            if(c%n2 != 0){
                return c;
            }
        }
    }
}
int main()
{
    int n1,n2,q=1;
    cin>>n1>>n2;
    int m= func(n1,n2);
    cout<<func(n1,n2);
    return 0;
}
