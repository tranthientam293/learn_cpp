#include <iostream>

using namespace std;

int main(){
	long long n;
	
	cin >> n;
	
	if (n<1){
		cout << "Invalid\n";
	}
	else if (n % 2) {
		cout << -1LL * (n + 1)/2 << endl;
	}else{
		cout << 1LL * n/2 << endl;
	}
	return 0;
}
