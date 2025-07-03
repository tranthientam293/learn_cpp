#include <iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	long long s = 0;
	
	for (int i = 2; i <= n; i += 2){
		s += i;
	}
	
	cout << s << endl;
	
	return 0;
}

