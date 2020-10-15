#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    int *p;
    // p = ( int*)malloc(500*sizeof(int));
    // p[0] = 123438976 ;

    p = new int[5];
    p[0] = 23;
    cout << *p << endl;
    
    return 0;
}
