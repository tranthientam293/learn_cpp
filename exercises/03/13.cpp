#include <iostream>

using namespace std;

int main(){
	long long n;
	int s = 0;
	
	cin >> n;
	
	while(n > 0){
		s += n%10;
		n /= 10;
	}
	
	cout << s << endl;
	
	return 0;
}

