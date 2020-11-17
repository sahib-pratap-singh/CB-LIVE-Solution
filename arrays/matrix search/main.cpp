#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int a[50][50];
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    cin>>a[i][j];
            }
    }
    int no;
    cin>>no;
    bool flag = true;
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    if(a[i][j] == no){
                            cout<<1;
                            flag =false;
                    }
            }
    }
    if(flag == true){
            cout<<0;
    }
}
