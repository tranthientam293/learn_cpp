#include <iostream>

using namespace std;

int main(){
	int n;
	long long s = 0;
	
	cin >> n;
	
	for (int i = 3; i <= n; i += 3){
		s += i;
	}
	
	cout << s << endl;
	
	return 0;
}

