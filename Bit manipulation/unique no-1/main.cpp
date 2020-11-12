#include <iostream>
using namespace std;
int main() {
    int no,ans=0;
    cin>>no;
    int a;
    for(int i=0;i<no;i++){
            cin>>a;
            ans = ans^a;
    }
    cout<<a;
}
