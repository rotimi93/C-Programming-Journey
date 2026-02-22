#include <iostream>
using namespace std;

int func(){
	int age;
	cout << "What your age?: " << endl;
	cin >> age;
	
	if(age >= 18){
		cout << "You are an adult"<<endl;
	}else{
		cout << "Your not an adult"<<endl;
	}
	return 0;
}

int func1(){
	int x = 1;
	for(;x <= 20;x++){
		cout << x <<endl;
	}
	return 0;
}

int func2(){
	int i,x;
	cout << "Input a number: ";
	cin >> x;

	i = 1;
	for(;i<=10;i++){
		cout << x <<" x " << i << " = " << x*i << endl;
	}
	
	return 0;
}

int main(){
	//func();
	//func1();
	func2();
	return 0;
}