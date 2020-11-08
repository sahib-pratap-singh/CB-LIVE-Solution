#include <iostream>
#include <string>
using namespace std;
bool palindrome(int a[], int n){
    bool ispali = true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
             ispali = false;
        }
    }
	return ispali;
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

    cout<< boolalpha<<palindrome(a,n);
    return 0;
}
