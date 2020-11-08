#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        int row=5;
        for(int j=1;j<=i;j++){
            cout<<row<<" ";
            row--;
        }
        for(int space=i;space<=5;space++){
            cout<<" "<<" ";
        }
        for(int space=i+1;space<=5;space++){
            cout<<" "<<" ";
        }
        row++;
        for(int j=1;j<=i;j++){
            cout<<row<<" ";
            row++;
        }
        cout<<endl;
    }
    int row=5;
    for(int mid=1;mid<=5+1;mid++){
            cout<<row<<" ";
            row--;
        }
    row+=2;
    for(int mid=1;mid<=5;mid++){
            cout<<row<<" ";
            row++;
        }
    cout<<endl;
    for(int i=1;i<=5;i++){
        int row=5;
        for(int j=i;j<=5;j++){
            cout<<row<<" ";
            row--;
        }
        for(int space=1;space<=i;space++){
            cout<<" "<<" ";
        }
        for(int space=1+1;space<=i;space++){
            cout<<" "<<" ";
        }
        row++;
        for(int j=i;j<=5;j++){
            cout<<row<<" ";
            row++;
        }
        cout<<endl;
    }
    return 0;
}
