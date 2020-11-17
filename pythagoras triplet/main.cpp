#include <iostream>
using namespace std;
int main() {
    //
    long long int no,h,a;
    cin>>no;
    if(no%2==0){
         h = (no*no)/4 + 1;
         a = (no*no)/4 - 1;
    }
    else{
            h = (no+1)*(no+1)/4 + (no-1)*(no-1)/4;
            a = (no+1)*(no-1)/2;
    }

    if(no>a){
            cout<<"-1";
    }
    else{
            cout<<a<<" "<<h;
    }


}
