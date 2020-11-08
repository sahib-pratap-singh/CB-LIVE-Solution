#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int cnt=0,j;
    while(str[cnt]!='\0'){
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        if(str[i]<91){
            cout<<str[i];
             j=i;
            while(str[j+1]>91){
                cout<<str[j+1];
                j++;
            }
            cout<<endl;
        }
    }
}
