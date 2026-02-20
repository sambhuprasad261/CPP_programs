#include <iostream>
#include <utility>

int main(){
	
	int arr[] = {5, 4, 3, 2, 1};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	std::cout << "The Unsorted array is ";
	
		for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
	std::cout << std::endl;
	
	for(int i = 0; i < len - 1; i++){
		
		for(int j = 0; j < len - i - 1; j++){
			
			if(arr[j] > arr[j + 1]){
				
				std::swap(arr[j], arr[j + 1]);
				
			}
			
		}
		
	}
	
	std::cout << "The Sorted array is ";
	for(int k = 0; k < len; k++){
		
		std::cout << arr[k] << " ";
		
	}
	
	return 0;
}