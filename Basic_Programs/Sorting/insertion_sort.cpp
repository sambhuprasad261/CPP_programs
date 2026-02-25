#include<iostream>
#include<algorithm>

void insertion_sort(int arr [], int n){
	
	int i = 0, j = 0, key = 0;
	
	for(i = 1; i < n; i++){
		
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			
			arr[j + 1] = arr[j];
			j--;
			
		}
		
		arr[j + 1] = key;
		
	}
	
}

int main(){
	
	int arr [] = {5, 4, 3, 2, 1};
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "The Unsorted array is: ";
	for(int i = 0; i < arr_len; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	std::cout << "\n";
	
	insertion_sort(arr, arr_len);
	
	std::cout << "The Sorted array is: ";
	for(int i = 0; i < arr_len; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	return 0;
}