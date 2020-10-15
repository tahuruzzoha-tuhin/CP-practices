#include<iostream>
using namespace std;
int main()
{
    int a = 11;
    int &r = a;
    cout << r << endl;
    cout << a << endl;
    return 0;
}
