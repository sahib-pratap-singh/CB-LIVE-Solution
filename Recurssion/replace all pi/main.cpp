#include <iostream>
using namespace std;
void replacepi(char a[], int i){
        if(a[i]=='\0' or a[i+1]=='\0'){
                return;
        }
        if(a[i]=='p' and a[i+1]=='i'){
                int j=i+2;
                while(a[j]!='\0'){
                        j++;
                }
                while(j>=i+2){
                        a[j+2]=a[j];
                        j--;
                }
                a[i]='3';
                a[i+1]='.';
                a[i+2]='1';
                a[i+3]='4';
                replacepi(a,i+1);
        }
        else{
                replacepi(a,i+1);
        }
}
int main() {
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
    char a[10000];
    cin>>a;
    replacepi(a,0);
    cout<<a<<endl;
    }
}
