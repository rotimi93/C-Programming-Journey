#include <iostream>
using namespace std;

int func(){
	int x,i,k,s,len_x,z;
	int y[5] = {};
	i = 0;
	k = 0;
	s = 0;
	len_x = sizeof(y) / sizeof(y[0]);
	cout << "Enter 5 Numbers: " << endl;

	for(;i<len_x;i++){
		//cin >> x;
		//y[i] = x;
		cin >> y[i];
		s += y[i];
		
	}

	z = y[0];
	for(;k<len_x;k++){
		if(y[k] < z){
			z = y[k];
		}
	}
	
	cout << "The sum of your input is: " << s << endl;
	cout << "The smallest number in array is: " << z << endl;
	return 0;
}

main(){
	func();
	return 0;
}