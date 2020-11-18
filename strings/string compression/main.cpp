#include <iostream>
using namespace std;
int main() {
    string st;
    cin>>st;
    int cnt=1;
    for(int i=0;i<st.length();i++){
            if(st[i]==st[i+1]){
                    cnt++;
            }
            else{
                    cout<<st[i]<<cnt;
                    cnt=1;
            }
    }
}
