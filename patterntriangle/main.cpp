#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            cout<<" "<<" ";
        }
        int row=i;
        for(int j=1;j<=i;j++){
            cout<<row<<" ";
            row++;
        }
        row-=2;
        int row2=i;
        for(int j=1;j<i;j++){
            cout<<row<<" ";
            row--;
        }
        cout<<endl;
    }
    return 0;
}
