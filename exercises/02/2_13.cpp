#include <iostream>

using namespace std;

int main(){
	int a,b;
	
	cin >> a >> b;
	
	if (a < 1 || b < 1 || b > a){
		cout << "Invalid\n";
	}
	else {
		cout << (a/b) * b << endl;
	}
	return 0;
}
