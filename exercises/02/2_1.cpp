#include <iostream>

using namespace std;

int main(){
	int firstNum, secondNum;
	
	cin >> firstNum >> secondNum;
	
	int quotient = firstNum / secondNum;
	int remainder = firstNum % secondNum;
	
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;
	return 0;
}
