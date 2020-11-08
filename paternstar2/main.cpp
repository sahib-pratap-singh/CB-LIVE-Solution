#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        int row=1;
        for(int j=i;j<=5;j++){
            cout<<row;
            row++;
        }

        for(int j=1;j<=i-1;j++){
            cout<<'*';
        }
        for(int j=1;j<=i-2;j++){
            cout<<'*';
        }

        cout<<endl;
    }
    return 0;
}
