#include <iostream>
using namespace std;
int main() {
    int first,second,no;
    int number,m=0;
    cin>>number;
    int ans[number]={0};
    for(int i=0;i<number;i++){
    cin>>first;//1
    cin>>second;//1
    for(no=first;no<=second;no++){
        int next = no;
        while(next>0){
                if((next & 1)>0){
                        ans[m]++;
                }
                next=next>>1;
        }
    }
    m++;

    }
    for(int i=0;i<number;i++){
            cout<<ans[i]<<endl;
    }
}
