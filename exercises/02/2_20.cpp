#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}
