#include <iostream>
#include <string>

int main(){
	
	int a = 0, b = 0;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	
	std::cout << "Before Swapping a = " << a << " and b = " << b << std::endl;
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	std::cout << "After Swapping a = " << a << " and b = " << b << std::endl;
	
	return 0;
}