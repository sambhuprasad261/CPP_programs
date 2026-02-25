#include <iostream>
#include <string>

int main(){
	
	int a = 0, b = 0;
	int carry = 0;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	
	while(b){
		
		carry = a & b;
		a = a ^ b;
		
		b = carry << 1;
		
	}
	
	std::cout << "The addition two numbers is " << a;
	
	return 0;
}