#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(int x, int y){
    return (x)*(y);
}
int main()
{
    struct Rectangle r = {2, 6};
    struct Rectangle *p = &r;  //static object
    int s = area(r.length, r.breadth);
    cout << s << endl;

    int q = p->length = 45;
    int w = p->breadth = 3;
    int e = area(q, w);
    cout << e << endl;
    return 0;
}
