#include <iostream>

using namespace std;

int main()
{
    int no;
    cin>>no;
  /*  if(no< 5 || no>20){
        cout<<"INVALID INPUT";
        return 0;
    } */
    int a = 1,b = 1,arr[100],i=0,c;
    cout<<a<<" "<<b<<" ";
    while(no>1){
        c = a+b;
        cout<<c<<" ";
        arr[i] = c;
        i++;
        a = b;
        b = c;
        no--;
    }
    return 0;
}
