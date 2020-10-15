#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle *p;
    
    p = (struct Rectangle*) malloc(sizeof(struct Rectangle)); //dynamic object
    int l = p->length = 3;
    int b = p->breadth = 4;

    cout << l*b << endl;

    return 0;
}