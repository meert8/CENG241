#include <iostream>

namespace ScopeA {
    void print() {
        std::cout << "Namespace Scope A\n";
    }
}

namespace ScopeB {
    void print() {
        std::cout << "Namespace Scope B\n";
    }
}
using namespace ScopeA;

int main() {
    ScopeA::print();
    print( );
    ScopeB::print();
}
