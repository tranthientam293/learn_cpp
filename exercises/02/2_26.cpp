#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (a + b <= c || a + c <= b || b + c <= a){
		cout << "INVALID\n";
	}
	else if (a == b && b == c && c == a){
		cout << 1 << endl;
	}
	else if (a == b || b == c || c == a){
		cout << 2 << endl;
	}
	else if (pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2)){
		cout << 3 << endl;
	}else {
		cout << 4 << endl;
	}
	
	return 0;
}
