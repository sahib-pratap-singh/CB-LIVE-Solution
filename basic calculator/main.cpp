#include <iostream>

using namespace std;


int main()
{
    long long int m,n;
    char ch;
    while(ch!='X' && ch!='x'){
        cin>>ch;
        if(ch=='*' or ch=='-' or ch=='+' or ch=='/' or ch=='%' and m>=0 and n>=0){
            cin>>m;
            cin>>n;
        }
            if(ch=='*'){
            cout<<m*n<<endl;
            }
            else if(ch=='+'){
                cout<<m+n<<endl;
            }
            else if(ch=='-'){
                cout<<m-n<<endl;
            }
            else if(ch=='/'){
                cout<<m/n<<endl;
            }
            else if(ch=='%'){
                cout<<m%n<<endl;
            }
            else if(ch!='X' && ch!='x'){
                cout<<"Invalid operation. Try again."<<endl;
            }
    }
    return 0;
}
