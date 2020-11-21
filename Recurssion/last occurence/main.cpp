#include <iostream>
using namespace std;
int lastoccur(long long int a[],long long int no,int key){
        if(no==0){
                return -1;
        }
        int i=lastoccur(a+1,no-1,key);
        if(i==-1){
                if(a[0]==key){
                        return 0;
                }
                else{
                        return -1;
                }
        }
        return i+1;
}
int main() {
    long long int no;
    cin>>no;
    long long int a[100];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<lastoccur(a,no,key);
}
