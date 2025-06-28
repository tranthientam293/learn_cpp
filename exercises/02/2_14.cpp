#include <iostream>

using namespace std;

int main(){
	int a,b;
	
	cin >> a >> b;
	
	if (a < 1 || b < 1 || b > a){
		cout << "Invalid\n";
	}
	else {
		int remainder = a%b;

		if (remainder){
			cout << (a/b + 1) * b << endl;
		}
		else {
			cout << a << endl;
		}
	}
	return 0;
}
