#include <iostream>
using namespace std;
bool arrayissorted(long long int a[],long long int no){
        if(no==0 or no==1){
                return true;
        }

        if(a[0]<a[1] and arrayissorted(a+1,no-1)){
                return true;
        }
        return false;

}
int main() {
    long long int no;
    cin>>no;
    long long int a[100];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    cout<<boolalpha<<arrayissorted(a,no);
}
