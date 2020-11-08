#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int assumption=i;
        int min_val=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_val]){
                min_val=j;
            }
        }
        swap(a[min_val],a[assumption]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
