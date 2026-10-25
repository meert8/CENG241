#include <iostream>
using namespace std; //Cant use string without this namespace

int value = 10;
string name= "Hacı";

namespace First {
int value = 20;
string name = "Elif";
}

namespace Second {
int value = 30;
string name = "Beyza";
}

int main() {
	int value = 5;
	string name = "Mert";
	//Values
	std::cout << "Local variable: " << value << '\n';
	std::cout << "Global variable: " << ::value << '\n';
	std::cout << "First namespace variable: " << First::value << '\n';
	std::cout << "Second namespace variable: " << Second::value << '\n';
	//Names
	std::cout << "Local name: " << name << '\n';
	std::cout << "Global name: " << ::name << '\n';
	std::cout << "First namespace name: " << First::name << '\n';
	std::cout << "Second namespace name: " << Second::name << '\n';

	return 0;
}
