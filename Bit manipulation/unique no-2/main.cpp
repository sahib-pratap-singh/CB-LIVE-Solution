#include <iostream>
using namespace std;
int main() {
    int no;
    cin>>no;
    int a[100005];
    int r=0,number;
    for(int i=0;i<no;i++){
            cin>>number;
            a[i]=number;
            r = r^number;
    }
    int pos=0;
    int temp =r;
    while((temp&1)!=1){
            pos++;
            temp=temp>>1;
    }
    int mask = (1<<pos);
    int x=0;
    int y=0;
    for(int i=0;i<no;i++){
            if((a[i]&mask)>0){
                    x = x^a[i];
            }
    }
    y=r^x;
    cout<<min(x,y)<<" "<<max(x,y)<<endl;

}
