#include <iostream>
#include <string>
using namespace std;
int main() {
    int sal;
    cin>>sal;
    int no;
    cin>>no;
    string name[100];
    int salary[100];
    for(int i=0;i<no;i++){
            cin>>name[i]>>salary[i];
    }
    for(int i=0;i<no;i++){
            for(int j=i+1;j<no;j++){
                    if(salary[i]<salary[j]){
                            swap(salary[i],salary[j]);
                            swap(name[i],name[j]);
                    }
            }
    }
    for(int i=0;i<no;i++){
            for(int j=i+1;j<no;j++){
                    if(salary[i] == salary[j]){
                            string f_nm = name[i];
                            string s_nm = name[j];
                            if(f_nm[0] > s_nm[0]){
                                    swap(name[i],name[j]);
                            }
                    }
            }
    }
    for(int i=0;i<no;i++){
            if(salary[i]>=sal)
                cout<<name[i]<<" "<<salary[i]<<endl;
    }
}
