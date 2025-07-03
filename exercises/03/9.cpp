#include <iostream>

using namespace std;

int main(){
	int n;
	long long s = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++){
		s += i * i * i;
	}

	cout << s << endl;	
	return 0;
}

