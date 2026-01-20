#include  <iostream>
#include <stdio.h>
using namespace std;

class A {
    public: 
        A() { cout << "A's constructor called" << endl; }
        ~A() { cout << "A's destructor called" << endl; }
    };


class B {
    public:
        B() { cout << "B's constructor called" << endl; }
        ~B() { cout << "B's destructor called" << endl; }
    };


class C {
    public:
        C() { cout << "C's constructor called" << endl; }
        ~C() { cout << "C's destructor called" << endl; }
    };

void func() {
    B b_func;
} // 'a_func' goes out of scope here, destructor should be called

int main() {
    A a;
    func();
    C c;
    
    return 0;
}