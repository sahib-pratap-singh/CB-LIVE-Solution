#include <iostream>
//#include <boost/lexical_cast.hpp>// for lexical_cast()
#include <string>
#include <algorithm>
using namespace std;
int cmp(string a, string b){
        //int f_value = boost::lexical_cast<int>(a);
        //int s_value = boost::lexical_cast<int>(b);
        int f_value = stoi(a);
        int s_value = stoi(b);
        int new_a = 9-f_value;
        int new_b = 9-s_value;
        if(new_a < f_value){
                a = to_string(new_a);
        }
        else if(new_b< s_value){
                b = to_string(new_b);
        }
        string t1 = a.append(b);
        string t2 = b.append(a);
        return t1.compare(t2)<0?1:0;
}
int main() {
    string no;
    cin>>no;
    int width = no.length();
    int a[width];
    for(int i=0;i<no.length();i++){
            a[i] = no[i];
    }
    sort(a,a+width,cmp);
}
