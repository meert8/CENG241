#include <iostream>

namespace ScopeA {
    void print2() {
        std::cout << "Namespace Scope A\n";
    }
}

namespace ScopeB {
    void print() {
        std::cout << "Namespace Scope B\n";
    }
}

using namespace ScopeB;
using namespace ScopeA;

int main() {
    print();
    print2();
}
