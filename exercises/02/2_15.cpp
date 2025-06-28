#include <iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	bool result = n % 3 == 0 && n % 5 == 0;
	
	cout << result << endl;
	
	return 0;
}
