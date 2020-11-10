#include <iostream>

using namespace std;

int main()
{
    int a[100000],no;
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>a[i];
    }
    for(int i=0;i<no;i++){
        for(int j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                swap(a[j],a[i]);
            }
        }
    }
    for(int i=0;i<no;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
