#include <iostream>
using namespace std;
int main() {
        int cases;
        cin>>cases;
        for(int i=0;i<cases;i++){
        int no;
        cin>>no;
        int cnt=0;
    while(no>0){
            if(no&1>0){
                    cnt++;
            }
            no=no>>1;
    }
    cout<<cnt<<endl;
        }
}
