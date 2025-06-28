#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int r;
	
	cin >> r;
	
	cout << "Circumference: " << fixed << setprecision(2) << 3.14 * 2 * r  << endl;
	cout << "Area: " << fixed << setprecision(2) << 3.14 * r * r << endl;
	
	return 0;
}
