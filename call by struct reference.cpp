#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;

};

int area(struct Rectangle r1){
    int p = r1.length*r1.breadth;
    return p;
}
int main()
{
    struct Rectangle r = {10,4};
    cout << area(r) << endl;
}