#include <iostream>

using namespace std;

int main()
{
    int i=1,sum=0,a[100],n=1;
    while(i>0){
        cin>>a[i];
        sum=sum+a[i];
        if(sum<0){
            while(n<i){
                cout<<a[n]<<endl;
                n++;
            }
        return 0;
        }
        i++;
    }
    return 0;
}
