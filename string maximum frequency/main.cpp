#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=0,cnt=1,chno=0,i=1;
    while(s[len+1]!='\0'){
        if(s[i]==s[len]){
            cnt++;
        }
        len++;
    }

    return 0;
}
