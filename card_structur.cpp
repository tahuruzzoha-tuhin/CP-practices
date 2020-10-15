#include<iostream>
using namespace std;
struct card{
    int face;
    int shape;
    int color;
};
int main(int argc, char const *argv[])
{
    struct card deck[3] = {{1,89,0},{1,67,0},{2,1,0}};
    cout << deck[0].shape << endl;
    cout << deck[2].face << endl;
    cout << deck[1].color << endl;
    return 0;
}
