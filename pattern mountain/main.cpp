#include <iostream>

using namespace std;

int main()
{
    int row;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int space=i+1;space<=4;space++){
            cout<<" "<<" ";
        }
        for(int space=i+2;space<=4;space++){
            cout<<" "<<" ";
        }
        if(i==4){
            row=i-1;
        }
        else{
            row=i;
        }
        int x=row;
        for(int j=1;j<=row;j++){
            cout<<x<<" ";
            x--;

        }
        cout<<endl;
    }
    return 0;
}
