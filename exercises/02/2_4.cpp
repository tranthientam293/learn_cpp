#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a,b;
	
	cin >> a >> b;
	
	int sum = a + b;
	int difference = a - b;
	long long product = 1LL * a * b;
	float quotient = (1.0 * a) / b; 
	
	cout << "Sum: " << sum << endl;
	cout << "Difference: " << difference << endl;
	cout << "Quotient: " << fixed << setprecision(2) << quotient << endl;
	cout << "Product: " << product << endl;
	
	return 0;
}
