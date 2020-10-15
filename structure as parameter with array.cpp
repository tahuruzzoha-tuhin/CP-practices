#include<iostream>
using namespace std;
struct arr{
    int a[5];
    int n;
};

int fun(struct arr k ){
    for(int i=0; i<5; i++){
        cout << k.a[i] << endl;
        k.n+=k.a[i];
    }
    return k.n;

}
int main(){
    struct arr  w = {{1,4,2,3,5},9};
    cout << fun(w) << endl;


}