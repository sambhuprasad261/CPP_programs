#include <iostream>

void swap(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

/*

int main(){
	
	int arr [] = {0, 1, 0, 0, 2, 0, 0, 4, 0, 0, 3, 0, 0, 7, 0, 0};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int i = 0;
	
	std::cout << "Before Move zeroes to end arr = " << "";
	for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
	for(int j = 0; j < len; j++){
		
		if(arr[j] != 0){
			
			arr[i] = arr[j];
			i++;
		}
		
	}
	
	for(int k = i; k < len; k++){
		
		arr[k] = 0;
		
	}
	
	std::cout << "\nAfter Move zeroes to end arr = " << "";
	for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
}
*/

//method 2

int main(){
	
	int arr [] = {0, 1, 0, 0, 2, 0, 0, 4, 0, 0, 3, 0, 0, 7, 0, 0};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	int i = 0;
	
	std::cout << "Before Move zeroes to end arr = " << "";
	for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
	for(int j = 0; j < len; j++){
		
		if(arr[j] != 0){
			
			swap(&arr[i], &arr[j]);
			i++;
		}
		
	}
	
	for(int k = i; k < len; k++){
		
		arr[k] = 0;
		
	}
	
	std::cout << "\nAfter Move zeroes to end arr = " << "";
	for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
}