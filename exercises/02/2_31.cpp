#include <iostream>

using namespace std;

int main(){
	float a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	float result = (a + b + c*2 + d*3)/7;
	
	if (result >= 8){
		cout << "GIOI\n";
	}
	else if (result >= 6.5){
		cout << "KHA\n";
	}
	else if (result >= 5){
		cout << "TRUNG BINH\n";
	}
	else {
		cout << "YEU\n";
	}
	
	return 0;
}
