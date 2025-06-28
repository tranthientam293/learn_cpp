#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int delta = b*b - 4*a*c;
	
	if (delta < 0) {
		cout << "NO\n";
	}
	else {
		cout  << fixed << setprecision(2) << 1.0*(-b - sqrt(delta))/(2*a) << " " <<  1.0*(-b + sqrt(delta))/(2*a) << endl;
	}
	
	return 0;
}
