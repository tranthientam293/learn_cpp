#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x;
	
	cin >> x;
	
	int result = pow(x,3) + 3*pow(x,2) + x + 1;
	
	cout << result;
	
	return 0;
}
