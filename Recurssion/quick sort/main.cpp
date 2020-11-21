#include <iostream>
using namespace std;
int partition(int a[],int start,int end){
        int i=start-1;
        int j=start;
        int pivot=a[end];
        while(j<=end-1){
                if(a[j]<=pivot){
                        i++;
                        swap(a[i],a[j]);
                }
                j++;
        }
        swap(a[i+1],a[end]);
        return i+1;
}
void quicksort(int a[],int start, int end){
        if(start>=end){
                return;
        }
        int p=partition(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);

}
int main() {
    int no;
    cin>>no;
    int a[no];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    quicksort(a,0,no-1);
    for(int i=0;i<no;i++){
            cout<<a[i]<<" ";
    }
}
