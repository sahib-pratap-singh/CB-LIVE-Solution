#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,r1,r2;
    cin>>a>>b>>c;
    r1=(-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
    r2=(-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
    if(r1==r2){
        cout<<"Real and Equal"<<endl;
        cout<<r2<<" "<<r1;
    }
    else if(r1>0 and r2>0 and r1!=r2){
        cout<<"Real and Distinct"<<endl;
        cout<<r2<<" "<<r1;
    }
    else if(pow(b,2)-(4*a*c)<0){
        cout<<"Imaginary";
    }
    return 0;
}
