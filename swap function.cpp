#include<iostream>
#include<algorithm>
using namespace std;


void swp(int *a, int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
    //return a+b;
}

int main()
{
    int a = 10, b = 20;
    //cin >> a >> b;
    //cout << swp(b,a) << endl;
    swp(&a,&b);
    cout << a <<" " << b << endl;
    return 0;
}
