#include <iostream>

using namespace std;

int main(){
	char c;
	
	cin >> c;
	
	if (c < 65 || c > 90){
		cout << "NO" << endl;
	}else {
		cout << "YES" << endl;
	}
	
	return 0;
}
