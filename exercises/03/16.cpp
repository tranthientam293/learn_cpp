#include <iostream>

using namespace std;

int main(){
	long long n;
	int count = 0;
	
	cin >> n;
	
	while(n > 0){
		int num = n % 10;
		n /= 10;
		
		if (num < 2){
			continue;
		}else if (num < 4) {
			count++;
		}else if (num %2 != 0 && num % 3 != 0) {
			count++;
		}
	}
	
	cout << count << endl;
	
	return 0;
}

