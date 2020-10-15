#include<iostream>
using namespace std;

struct  complex
{
    int a;
    int b;
};

int main(int argc, char const *argv[])
{
    int x;
    struct complex w;
    cin >>  x ;
    w.a = x;
    w.b = 8;
    cout << w.a*w.b << endl;
    
    return 0;
}
