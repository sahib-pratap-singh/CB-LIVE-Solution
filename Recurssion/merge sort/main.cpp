#include <iostream>
using namespace std;
void merge(int a[],int start,int e){
        int mid=(start+e)/2;
        int i=start;
        int j=mid+1;
        int k=start;
        int temp[1000005];

        while(i<=mid and j<=e){
                if(a[i]<=a[j]){
                        temp[k++]=a[i++];
                }
                else{
                        temp[k++]=a[j++];
                }
        }
        while(i<=mid){
                temp[k++]=a[i++];
        }
        while(j<=e){
                temp[k++]=a[j++];
        }

        for(int i=start;i<=e;i++){
                a[i]=temp[i];
        }
}
void mergesort(int a[],int start, int e){
        if(start>=e){
                return;
        }
        int mid=(start+e)/2;
        //dividing the array
        mergesort(a,start,mid);
        mergesort(a,mid+1,e);

        merge(a,start,e);
}
int main() {
    int no;
    cin>>no;
    int a[1000005];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    mergesort(a,0,no-1);
    for(int i=0;i<no;i++){
                cout<<a[i]<<" ";
        }
}
