#include <iostream>

using namespace std;
void binarySearch(int a[],int beg,int endi,int item){
    int mid = (beg+endi)/2;
    if(a[mid]==item){
        cout<<mid;
    }
    else if(a[mid]>item){
        binarySearch(a,0,mid-1,item);
    }
    else if(a[mid]<item){
        binarySearch(a,mid+1,endi,item);
    }
}
int main()
{
    int no,a[10000],item;
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>a[i];
    }
    cin>>item;
    bool isitem = false;
    for(int i=0;i<no;i++){
        if(a[i]==item){
            isitem = true;
        }
    }
    if(isitem == false){
        cout<<"-1";
        return 0;
    }
    binarySearch(a,0,no-1,item);
    return 0;
}
