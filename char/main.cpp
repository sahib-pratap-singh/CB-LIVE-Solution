#include <iostream>
#include <string>
using namespace std;
bool palindrome(string s){
    int len=0;
    while(s[len] != '\0'){
        len++;
    }
    int strlen=len-1;
    for(int i=0;i<strlen;i++){
        if(s[i]==s[strlen]){
            return true;
        }
        else{
            return false;
        }
    }
}

int main()
{
    string s;
    cin>>s;
    //length of string
  /*  int len=0;
    while(s[len] != '\0'){
        len++;
    }
    cout<<len; */

    //string is palindrome
    cout<< boolalpha<<palindrome(s);
    return 0;
}
