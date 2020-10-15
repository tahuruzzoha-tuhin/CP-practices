#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p;
    
    p = &a;
    cout << *p << endl;
    cin >> a ;
    cout << "The pointer value: " << *p << endl;
    return 0;
}
