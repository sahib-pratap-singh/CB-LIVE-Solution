#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int my_compare(string a, string b)
{
    string first = a.append(b);
    string second = b.append(a);
    return first.compare(second) > 0 ? 1: 0;
}
void printLargest(string arr[],int n)
{
    sort(arr, arr+n, my_compare);
    for (int i=0; i < n ; i++ ){
        cout << arr[i];
    }
}

int main()
{
    int cases;
    cin >>cases;
    for(int i=0;i<cases;i++){
    string arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printLargest(arr,n);
    cout<<endl;
    }

   return 0;
}
