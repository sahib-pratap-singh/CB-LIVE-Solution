#include <iostream>
#include <string>
using namespace std;
void strfreq(string str){
    int cnt=0,lrg=0,index;
    while(str[cnt]!='\0'){
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        int strcnt=0;
        for(int j=0;j<cnt;j++){
            if(str[i]==str[j]){
                strcnt++;
            }
        }
        if(strcnt>lrg){
            lrg=strcnt;
            index=i;
        }
    }
    cout<<str[index];
}
int main() {
    string str;
    cin>>str;
    strfreq(str);
}
