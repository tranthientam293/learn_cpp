#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 97 || c > 122){
		cout << c << endl;
	}
	else {
		char result = c - 32;
		cout << result << endl;
	}
	
	return 0;
}
