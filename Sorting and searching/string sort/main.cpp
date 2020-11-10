#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2){
   int i = 0;

        while (i < s1.length() && i < s2.length()) {

            if (s1[i] > s2[i]) {

                return false;
            } else if (s1[i] < s2[i]) {
                return true;
            }
            i++;

        }

        return s1.length() > s2.length();

}
int main(){
  int n,i;
  cin>>n;
  string  arr[n];
  for(i=0;i<n;i++)
  cin>>arr[i];
  sort(arr,arr+n,cmp);
  for(i=0;i<n;i++)
   cout<<arr[i]<<"\n";

}
