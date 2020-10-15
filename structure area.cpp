#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};



int main(int argc, char const *argv[])
{
    struct Rectangle r = {30,6};
    r.length = 10;
    r.breadth = 5;
    int area = r.length * r.breadth;
    cout << area << endl;

    return 0;
}
