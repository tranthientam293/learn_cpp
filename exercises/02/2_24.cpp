#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 65 || c > 122 || (c > 90 && c < 97)){
		cout << "INVALID\n";
	}
	else {
		char result;
		if (c < 97){
			c = c + 32;
		}
		
		if (c == 122){
			result = c - 25;
		}
		else {
			result = c + 1;
		}
		
		cout << result << endl;
	}
	
	return 0;
}
