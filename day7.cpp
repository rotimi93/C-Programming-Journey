#include <iostream>
using namespace std;

int func(){
	int *ptr,len_x,y;
	int x[3];
	len_x = sizeof(x) / sizeof(x[0]);
	for(int i=0; i < len_x; i++){
		cin >> x[i];
	}
	cout << "Pointer print out\n";
	for(int c=0; c < len_x; c++){
		ptr = &x[c];
		cout << *ptr << " : "<< ptr << endl;
	}
	return 0;
}


int main(){
	
	int x,*ptr;
	x = 10;
	ptr = &x;
	cout << "Value of x: " << x << endl;
	cout << "Address of x: " << &x << endl;
	cout << "Pointer value: " << *ptr << endl;
	cout << endl;

	func();
	return 0;
}