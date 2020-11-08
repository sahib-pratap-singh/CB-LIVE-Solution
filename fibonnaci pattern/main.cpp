#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==1 and i==1){
                cout<<0<<" ";
            }
            else if(j==1 and i==2){
                cout<<1<<" ";
            }
            else {
                int c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
        }
        cout<<endl;
    }
    return 0;
}
