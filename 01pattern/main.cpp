#include <iostream>

using namespace std;

int main()
{
    for(int row=1;row<=5;row++){
        if(row%2==0){
            int var=0;
            for(int col=1;col<=row;col+=1){
                cout<<var<<" ";
                var=1-var;
            }
        }
        else{
            int var=1;
            for(int col=1;col<=row;col++){
                cout<<var<<" ";
                var=1-var;
            }
        }
        cout<<endl;
    }
    return 0;
}
