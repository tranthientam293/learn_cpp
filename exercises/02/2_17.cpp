#include <iostream>

using namespace std;

int main(){
	int month, year;
	
	cin >> month >> year;
	
	if (year < 1 || month < 1 || month > 12) {
		cout << "INVALID\n";
	}
	else if (month == 2){
		bool isLeapYear = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
			
		if (isLeapYear) {
			cout << 29 << endl;
		}else {
			cout << 28 << endl;
		}	
	}
	else {
		switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout << 31 << endl;
				break;
			default:
				cout << 30 << endl;
		}
	}
	return 0;
}
