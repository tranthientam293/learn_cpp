#include <iostream>

using namespace std;

int main(){
	int day;
	
	cin >> day;
	
	int year = day / 365;
	int week = (day % 365) / 7;
	int days = (day % 365) % 7;
	
	cout << year << " " << week << " " << days << endl;
	
	return 0;
}
