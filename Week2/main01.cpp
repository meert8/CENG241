#include <iostream>
using namespace std;

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
namespace ScopeC{
    void print(){
        cout<<"Namespace Scope C"<<endl;
    }
}

int main() {
    ScopeA::print();
    ScopeB::print();
    ScopeC::print();
}
