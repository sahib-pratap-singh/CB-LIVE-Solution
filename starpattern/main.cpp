#include <iostream>

using namespace std;

int main()
{
    int ini,fin,stp;
    int c;
    cin>>ini>>fin>>stp;
    while(ini<=fin){
        c=(5*(ini-32))/9;
        cout<<ini<<"\t"<<c<<'\n';
        ini=ini+stp;
    }
    return 0;
}
