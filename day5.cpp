#include <iostream>
using namespace std;


int func(){
	int x[5] = {10,20,30,40,50};
	int i,s;
	s = sizeof(x) / sizeof(x[0]);

	for(;i < s;i++){
		cout << x[i] << endl;
	}
	return 0;
}

int func1(){
	int x[5] = {1,2,3,4,5};
	int i,sum,s,k;
	s = sizeof(x) / sizeof(x[0]);
	for(; i < s; i++){
		sum += x[i];
	}
	cout << sum;
	return 0;
}

int func2(){
	int x[7] = {20,3,7,2,9,5,10};
	int i,y,s;
	y = x[0];
	s = sizeof(x) / sizeof(x[0]);
	for(;i<s;i++){
		if(x[i] > y){
			y = x[i];
		}
	}
	cout << "The largest is: " << y << endl;

	return 0;
}

int main(){
	//func1();
	func2();
	return 0;
}