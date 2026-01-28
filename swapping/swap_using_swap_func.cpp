#include <iostream>
#include <string>

int main(){
	
	int a = 0, b = 0;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	
	std::cout << "Before swapping a = " << a << " and b = " << b << std::endl;
	
	std::swap(a,b);
	
	std::cout << "After swapping a = " << a << " and b = " << b << std::endl;
	
	return 0;
}