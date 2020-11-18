//BRUTE FORCE
#include <iostream>
using namespace std;
int main() {
    long long int no;
    cin>>no;
    int a[1000000];
    for(int i=0;i<no;i++){
            cin>>a[i];
    }
    int result=0;
    for( int i=0;i<no;i++){
             int left=0,right=0;
            for( int j=i-1;j>=0;j--){
                    left = max(left,a[j]);
            }
            for( int j=i+1;j<no;j++){
                    right = max(right,a[j]);
            }
            //cout<<left<<"and"<<right<<endl;
            if(left>a[i] and right>a[i]){
                result = result+min(left,right)-a[i];
            }
    }
    cout<<result;
}

// OPTIMIZED
#include <iostream>
using namespace std;
int a[1000000], l[1000000], r[1000000];
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    l[0] = a[0];
    r[n - 1] = a[n - 1];
    //int leftmax = 0, rightmax = 0;
    for (i = 1; i < n; i++)
    {
        l[i] = max(l[i - 1], a[i]);
    }
    for (i = n - 2; i >= 0; i--)
    {
        r[i] = max(r[i + 1], a[i]);
    }
    for (i = 1; i < n; i++)
    {
       cout<< l[i]<<" ";
    }
    cout<<endl;
    for (i = 1; i < n; i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<endl;
    int water = 0;
    for (i = 0; i < n; i++)
    {
        water += (min(l[i], r[i]) - a[i]);
    }
    cout << water;

    return 0;
}
