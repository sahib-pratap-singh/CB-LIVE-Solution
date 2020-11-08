#include <iostream>

using namespace std;

int main()
{
    /*
    int *p;
    char *q;
    float *r;
    long long int *s;
    long double *t;
    cout<<sizeof(p)<<" "<<sizeof(p)<<" "<<sizeof(q)<<" "<<sizeof(r)<<" "<<sizeof(s)<<" "<<sizeof(t)<<endl;

    char ch='A';
    char *xch = &ch;
    cout<<&ch<<endl;
    cout<<xch<<endl;
    cout<<(void*)&ch<<endl;
    cout<<(int*)xch;
    */
    int x=10;
    int *y=&x;
    cout<<x<<" "<<&x<<" "<<y<<" "<<&y<<" "<<*(&x)<<" "<<&(*y)<<" "<<x+1<<" "<<&x+1<<" "<<y+1<<" "<<*y+1<<" "<<*(&y);

    return 0;
}
