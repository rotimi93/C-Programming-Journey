#include <iostream>
using namespace std;

int func(){
	int x;
	cout << "Enter a number to check even/odd: ";
	cin >> x;
	if((x%2) == 0){
		cout << "The number " << x << " is even.";
	}else{
		cout <<"The number " << x << " is odd.";
	}

	return 0;
}

/*
int fun1(){
	int x,y,z;
	x = 5;
	y = 7;
	z = 3;
	
}
*/

int func2(){
	int x,z,result;
	char y;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter operator(+ - * /): ";
	cin >> y;
	cout << "Enter second number: ";
	cin >> z;

	if(y == '+'){
		result = x + z;
		cout << result;
	}

	if(y == '-'){
		result = x - z;
		cout << result;
	}

	if(y == '*'){
		result = x * z;
		cout << result;
	}

	if(y == '/'){
		result = x / z;
		cout << result;
	}
	
	return 0;
}

main(){
	//func();
	func2();
	return 0;
}