#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=0;
    cout<<s[0];
    while(s[len+1]!='\0'){
        cout<<s[len+1]-s[len]<<s[len+1];
        len++;
    }
    return 0;
}
