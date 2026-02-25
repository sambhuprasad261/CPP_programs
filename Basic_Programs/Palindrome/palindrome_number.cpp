#include <iostream>

int main(){
	
	int num = 0;
	
	std::cout << "Enter the Number: ";
	std::cin >> num;
	//std::cout << "The number is: " << num;
	
	int temp = num;
	int n = 0, sum = 0;
	
	while (num > 0) {
		
		sum = num % 10;
		//std::cout << "\nWhile loop sum = num % 10 =  " << sum;
		n = n * 10 + sum;
		//std::cout << "\nWhile loop n = n * 10 + n =  " << n;
		num = num / 10;
		
	}
	
	if(temp == n){
		
		std::cout << "This num = " << temp << " is Plaindrome number";
		
	}
	else{
		
		std::cout << "This num = " << temp << " is not a Plaindrome number";
		
	}
	
	//std::cout << "\nthe reverse num is: " << n;
	
	return 0;
}