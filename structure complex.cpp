#include<iostream>
using namespace std;

struct  complex
{
    int a;
    int b;
};

int main(int argc, char const *argv[])
{
    struct complex w;
    w.a = 3;
    w.b = 8;
    cout << w.a*w.b << endl;
    
    return 0;
}
