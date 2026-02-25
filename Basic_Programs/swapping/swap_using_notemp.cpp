#include<iostream>
#include <string>

using namespace std;

int main(){
	
	int a = 0, b = 0;
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	
	cout << "Before Swapping a = " << a << " and b = " << b << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "After Swapping a = " << a << " and b = " << b << endl;
	
	return 0;
}