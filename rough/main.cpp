#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=i;j<=n;j++){
            cout<<ch;
            ch++;
        }
        char ch2=(n-i)+'A';
        for(int j=i;j<=n;j++){
            cout<<ch2;
            ch2--;
        }
        cout<<endl;
    }
    return 0;
}
