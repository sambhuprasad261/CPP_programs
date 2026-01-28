#include <iostream>
#include <string>

int main(){
	
	int a, b;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin  >> b;
	
	if (b > 0){
		
		for(int i = 0; i < b; i++){
			
			a++;
			
		}
		
	}
	
	else{
		
		for(int i = 0; i > b; i--){
			
			a--;
			
		}
		
	}
	
	std::cout << "The addition two numbers is " << a;
	
	return 0;
}