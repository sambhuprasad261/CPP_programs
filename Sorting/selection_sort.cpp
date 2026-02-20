#include <iostream>
#include <algorithm>

int main(){
	
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	std:: cout << "The Unsorted Array is: ";
	
	for(int i = 0; i < n; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	std::cout << std::endl;
	
	for(int i = 0; i < n - 1; i++){
		
		int min_val = i;
		
		for(int j = i + 1; j < n; j++){
			
			if(arr[j] < arr[min_val]){
				
				min_val = j;
				
			}
			
		}
		
		int temp = arr[i];
		arr[i] = arr[min_val];
		arr[min_val] = temp;
		
	}
	
	std::cout << "The Sorted array is: ";
	
	for(int i = 0; i < n; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	return 0;
}