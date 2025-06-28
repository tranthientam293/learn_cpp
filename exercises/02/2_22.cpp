#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 65 || c > 90){
		cout << c << endl;
	}
	else {
		char result = c + 32;
		
		cout << result << endl;
	}
	
	return 0;
}
