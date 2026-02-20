#include <iostream>
#include<algorithm>

void merge(int arr[], int left, int mid, int right){
	
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	
	int L1[n1], R1[n2];
	
	for(i = 0; i < n1; i++){
		
		L1[i] = arr[left + i];
		
	}
	
	for(j = 0; j < n2; j++){
		
		R1[j] = arr[mid + 1 + j];
		
	}
	
	i = 0; 
	j = 0;
	k = left;
	
	while(i < n1 && j < n2){
		
		if(L1[i] <= R1[j]){
			
			arr[k] = L1[i];
			i++;
			
		}
		
		else{
			
			arr[k] = R1[j];
			j++;
			
		}
		
		k++;
		
	}
	
	while(i < n1){
		
		arr[k] = L1[i];
		i++;
		k++;
		
	}
	
	while(j < n2){
		
		arr[k] = R1[j];
		j++;
		k++;
		
	}
	
}

void merge_sort(int arr[], int left, int right){
	
	if(left < right){
		
		int mid = left + (right - left) / 2;
		
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		
		merge(arr, left, mid, right);
		
	}
	
}

int main(){
	
	int arr[] = {10, 5, 35, 20, 15, 30, 25};
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "Before Sorting Array is: ";
	for(int i = 0; i < arr_len; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	merge_sort(arr, 0, arr_len - 1);
	
	std::cout << "\nAfter Sorting Array is: " << " ";
	for(int i = 0; i < arr_len; i++){
		
		std::cout << arr[i] << " ";
		
	}
	
	return 0;
}