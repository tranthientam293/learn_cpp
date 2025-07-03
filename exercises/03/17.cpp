#include <iostream>

using namespace std;

int main(){
	long long n;
	int even = 0, odd = 0;
	
	cin >> n;
	
	while(n > 0){
		int num = n % 10;
		
		if (n > 0){
			if (n % 2 == 0){
				even++;
			}else {
				odd++;
			}
		}
		
		n /= 10;
	}
	
	if(even == odd){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	return 0;
}

