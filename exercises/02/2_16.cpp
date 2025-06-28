#include <iostream>

using namespace std;

int main(){
	int year;
	
	cin >> year;
	
	if (year < 1){
		cout << "INVALID\n";
	}
	else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	return 0;
}
