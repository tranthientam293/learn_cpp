#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 97 || c > 122) {
		cout << "NO" << endl;
	}else {
		cout << "YES" << endl;
	}
	
	return 0;
}
