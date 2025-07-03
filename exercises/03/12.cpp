#include <iostream>

using namespace std;

int main(){
	long long n;
	int count = 0;
	
	cin >> n;
	
	while(n > 0){
		count++;
		n = n / 10;
	}
	
	cout << count << endl;
	
	return 0;
}

