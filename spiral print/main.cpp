#include <iostream>

using namespace std;
void spiralprint(int a[][30],int r,int c){
    int sr=0;
    int sc=0;
    int er=r-1;
    int ec=c-1;
    int totalelement=0;
    while(totalelement<r*c){
        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
            totalelement++;
        }
        sr++;
        for(int i=sr;i<=er;i++){
            cout<<a[i][ec]<<" ";
            totalelement++;
        }
        ec--;
        for(int i=ec;i>=sc;i--){
            cout<<a[er][i]<<" ";
            totalelement++;
        }
        er--;
        for(int i=er;i>=sr;i--){
            cout<<a[i][sc]<<" ";
            totalelement++;
        }
        sc++;
    }
}
int main()
{
    int r,c,a[30][30];
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    spiralprint(a,r,c);
    return 0;
}
