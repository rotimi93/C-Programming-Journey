#include <iostream>
#include <string>
using namespace std;

func(){
	string x;
	cout << "What your name?: "<<endl;
	cin >> x;
	cout << "Welcome " << x << endl;
	return 0;
}

func1(){
	int x,y,sum;
	x = 5;
	y = 3;
	sum = x+y;
	cout << "sum of x and y is: " << sum<< endl;
	return 0;
}

main(){
	cout << "My name is Michael\nI am learning C++\nI will become confident"<<endl;
	//func();
	func1();
	return 0;
}