#include <iostream>
using namespace std;
int main() {
    int no,a[1000];
    cin>>no;
    bool increasing;
    bool bckincreasing;
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    int pivot=0;
    for(int i=0;i<no-1;i++){
            if(a[i]>a[i+1]){
                    pivot = i;
            }
    }
    //cout<<pivot;
    for(int i=pivot+1;i<no-1;i++){
            if(a[i]<a[i+1]){
                    increasing = true;
            }
    }
    if(pivot+1 == no-1){
        increasing = true;
    }
    //cout<<boolalpha<<increasing;
    for(int i=0;i<pivot;i++){
            if(a[i]<a[i+1]){
                    bckincreasing = true;
            }
    }
    if(pivot == 0){
                    bckincreasing = true;
            }
    //cout<<boolalpha<<bckincreasing;
    if(increasing == true && bckincreasing == true){
            cout<<pivot;
    }
        return 0;
}
