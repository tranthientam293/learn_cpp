#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if ( a + b <= c || a + c <= b || b + c <= a){
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
	}
	
	return 0;
}
