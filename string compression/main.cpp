#include <iostream>
#include <string>
using namespace std;
void strfreq(string str){
    int cnt=0,lrg=0,index;
    while(str[cnt]!='\0'){
        cnt++;
    }
    int strcnt=0;
    for(int i=0;i<cnt;i++){
       // int strcnt=0;
     /*   for(int j=0;j<cnt;j++){
            if(str[i]==str[j]){
                strcnt++;
            }
        } */
        if(str[i]==str[i+1]){
                strcnt++;
            }
        else if(str[i]!=str[i+1]){
            lrg=strcnt;
            index=i;
            cout<<str[i]<<strcnt;
        }
        //cout<<lrg;
    }
    //cout<<str[index];
}
int main() {
    string str;
    cin>>str;
    strfreq(str);
}
