#include <iostream>

using namespace std;

int main(){
	int x, y;
	long long result = 1;
	
	cin >> x >> y;
	
	for (int i = 1; i <= y; i++){
		result *= x;
	}
	
	cout << result << endl;
	return 0;
}

