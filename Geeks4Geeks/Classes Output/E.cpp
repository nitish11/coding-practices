#include<iostream>
using namespace std;
 
class Test {
    int value;
public:
    Test(int v);
    void set(int x ) {value=x;} 
};
 
Test::Test(int v=0) {
    value = v;
}
 
int main() {
    Test t[100];
    for(int i=0; i<100; i++) t[i].set(i); 
    return 0;
}
