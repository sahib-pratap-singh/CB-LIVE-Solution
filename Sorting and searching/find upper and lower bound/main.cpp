#include <iostream>
using namespace std;
int main() {
    int no,a[10000];
    cin>>no;
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    int item;
    cin>>item;
    int b[10000];
    for(int i=0;i<item;i++){
            cin>>b[i];
    }
    for(int i=0;i<item;i++){
        int x = b[i];
        int cnt =0;
        int indi,lb=-1,ub=-1;

        for(int j=0;j<no;j++){

                if(a[j]==x){
                        if(cnt==0){
                                lb=j;
                        }
                        else if(cnt>0){
                                ub=j;
                        }
                        cnt++;
                        indi = j;
                }
        }
        if(cnt==1){
                ub=indi;
        }
       cout<<lb<<" "<<ub<<endl;

        //cout<<endl;
    }
}
