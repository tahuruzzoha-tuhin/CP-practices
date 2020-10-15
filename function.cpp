#include<iostream>
using namespace std;
int add(int r, int e){
    return r+e;
}
int main(int argc, char const *argv[])
{
    int a , b;
    cin >> a >> b;
    cout << add(a,b) << endl;
    return 0;
}
