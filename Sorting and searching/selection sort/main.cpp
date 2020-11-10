#include <iostream>

using namespace std;

int main()
{
    int a[100000],no,mini,assumption;
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>a[i];
    }
    for(int i=0;i<no;i++){
        mini = i;
        assumption = i;
        for(int j=i+1;j<no;j++){
            if(a[j]<a[mini]){
                mini = j;
            }
        }
        swap(a[mini],a[assumption]);
    }
    for(int i=0;i<no;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
