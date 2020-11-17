#include <iostream>
using namespace std;
bool isincreasing(int a[],int no){
        bool decrease = true;
        for(int i=0;i<no-1;i++){
                if(a[i]<a[i+1]){
                        decrease = false;
                }
                else if(a[i]==a[i+1]){
                        return false;
                }
                else if(!decrease && a[i]>a[i+1]){
                        return false;
                }
        }
        return true;
}
int main() {
    int no;
    cin>>no;
    int a[10000];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    cout<<boolalpha<<isincreasing(a,no);
}
