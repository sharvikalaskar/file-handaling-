#include <iostream>
using namespace std;
   class Base {
    public:
        int prot;
    };

    class Derived : public Base {
    public:
        void foo() {
            prot = 42;
            cout << "prot = " << prot << endl;
        }
    };

int main() {

    Derived d;

    d.foo();
    return 0;
}
