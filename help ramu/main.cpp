#include <iostream>
using namespace std;
int main() {
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
            int c1,c2,c3,c4;
            cin>>c1>>c2>>c3>>c4;
            int n,m;
            cin>>n>>m;
            int rikshaw[10005];
            int cabs[10005];
            for(int l=0;l<n;l++){
                    cin>>rikshaw[l];
            }
            for(int l=0;l<m;l++){
                    cin>>cabs[l];
            }
            int rikshaw_cost=0;
            for(int l=0;l<n;l++){
                    rikshaw_cost += min(rikshaw[l]*c1,c2);
            }
            rikshaw_cost = min(rikshaw_cost,c3);
            int cab_cost=0;
            for(int l=0;l<m;l++){
                    cab_cost += min(cabs[l]*c1,c2);
            }
            cab_cost = min(cab_cost,c3);
            cout<<min(c4,(rikshaw_cost+cab_cost))<<endl;
    }
}
