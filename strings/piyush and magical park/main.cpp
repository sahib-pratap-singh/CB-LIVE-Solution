#include <iostream>
using namespace std;
int main() {
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char a[100][100];
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    cin>>a[i][j];
            }
    }
    for(int i=0;i<n;i++){
            if(s>k){
            for(int j=0;j<m;j++){
                    if(a[i][j]=='.' and j<m-1){
                            s=s-3;
                    }
                    else if(a[i][j]=='.' and j==m-1){
                            s=s-2;
                    }
                    else if(a[i][j]=='*' and j<m-1){
                            s=s+4;
                    }
                    else if(a[i][j]=='*' and j==m-1){
                            s=s+5;
                    }
                    else if(a[i][j]=='#'){
                            break;
                    }

            }
            }
    }
    if(s>k){
            cout<<"Yes"<<endl<<s;
    }
    else{
            cout<<"No";
    }
}
