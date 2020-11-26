#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
}
int main() {
    int no,a,b;
    cin>>no;
    pair<int,int> arr[no];
    for(int i=0;i<no;i++){
            cin>>a>>b;
            arr[i] = make_pair(a,b);
    }

    sort(arr,arr+no,cmp);
   // for(int i=0;i<no;i++){
   //             cout<<arr[i].first<<" "<<arr[i].second<<endl;
   //     }
    int count=1,choice=0;
    for(int i=1;i<no;i++){
            if(arr[i].first >= arr[choice].second){
                    count++;
                    choice=i;
                    //cout<<arr[i].first<<" "<<arr[choice].second<<endl;
            }

    }
    cout<<count;
}
