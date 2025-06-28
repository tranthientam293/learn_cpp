#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 48 || c > 57){
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	
	return 0;
}
