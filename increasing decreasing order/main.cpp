#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isdsc = true;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cout<<"false";
            return 0;
        }
        else if(a[i+1] < a[i]) {
            cout<<"false";
            return 0;
        }
        else if(a[i+1]>a[i]){
            isdsc =false;
        }
    }
    if(isdsc== false){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
