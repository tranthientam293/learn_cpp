#include <iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	if (n < 0){
		cout << "Invalid\n";
		return 1;
	}
	
	long long result = 1LL * n * (n+1)*(2*n+1)/6;
	
	cout << result << endl;
	
	return 0;
}
