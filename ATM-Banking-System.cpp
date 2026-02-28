#include <iostream>
#include <string>
using namespace std;

int x[3] = {1993,2001,1998};
string k[3] = {"Michael","John Doe","Madewa"};
float amount[3] = {00.00,00.00,00.00};

int login(int y, int x[]){
	for(int i = 0; i < 3; i++){
		if(y == x[i]){
			cout << "----Welcome to UBA bank [" << k[i] << "]----" << endl;
		}
	}
	return 0;
}

int checkBalance(int y, float amount[]){
	for(int i = 0; i < 3; i++){
		if(y == x[i]){
			cout << "----[Check Balance]----" << endl;
			cout << "Your balance is: " << amount[i] << endl;
			
		}
	}
	return 0;
}

int deposit(int y){
	for(int i = 0; i < 3; i++){
		if(y == x[i]){
			float am,preAm;
			cout << "----[Deposite]----"<< endl;
			cout << "Enter amount to deposite..." << endl;
			cin >> am;
			preAm = am + amount[i];
			amount[i] = preAm;
			
		}
	}
	return 0;
}

int withdraw(int y, float amount[]){
	for(int i = 0; i < 3; i++){
		if(y == x[i]){
			float draw;
			cout << "----[Withdraw]----"<< endl;
			cout << "\nYour current amount is: [" << amount[i]<< "]" << endl;
			cout << "Kindly input the amount to withdraw...\n";
			cin >> draw;
			if(amount[i] < draw){
				cout << "Insufficient fund, please refund your account :)\n";
			}else{
				cout << "Withdraw successful...\n";
				amount[i] -= draw;
			}
		}
	}
	return 0;
}

int mainSystem(int y){
	cout << "\n--------[Main Option]--------\n" << endl;
	cout << "[1] Check Balance" << endl;
	cout << "[2] Deposit" << endl;
	cout << "[3] Withdraw" << endl;
	cout << "[4] Exit" << endl;
	int options;
	for(int i = 0; i < 3; i++){
		if(y == x[i]){
			cout << "Please select from the above options [" << k[i] << "]: ";
			cin >> options;
			switch(options){
				case 1:
					cout << "Check balance selected" << endl;
					checkBalance(y,amount);
					mainSystem(y);
					break;
				case 2:
					cout << "Deposit selected" << endl;
					deposit(y);
					mainSystem(y);
					break;
				case 3:
					cout << "Withdraw selected" << endl;
					withdraw(y, amount);
					mainSystem(y);
					break;
				case 4:
					cout << "Exit selected - Thanks for banking with us... :)" << endl;
					break;
				default:
					cout << "Invalid selections; Machine will restart..." << endl;
			}
		}
	}
	return 0;
}
	
int main(){
	int y;
	cout << "----[Welcome to UBA Banking app terminal]----" << endl;
	cout << "Please enter your 4 digit password: ";
	cin >> y;
	int k = 2;
	for(int i = 0; i < 3; i++){
		if(x[i] == y){
			login(y,x);
			mainSystem(y);
		}
	}
	return 0;

}
