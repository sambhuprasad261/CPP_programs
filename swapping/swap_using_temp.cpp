#include <iostream>
#include <string>

int main(){
	
	int a = 0, b = 0;
	int temp = 0;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	
	std::cout << "Before Swaping a = " << a << " and b = " << b << "\n";
	
	temp = a;
	a = b;
	b = temp;
	
	std::cout << "After Swaping a = " << a << " and b = " << b;
 	
	return 0;
}