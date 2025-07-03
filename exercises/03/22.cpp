#include <iostream>

using namespace std;

int main(){
	// row length
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if (i==1){
			cout << 0 << endl;
		}else {
			long long max = 1LL * i * i * (i * i - 1)/2;
			long long attack = 1LL * 4 * (i - 1)*(i - 2);
			
			cout << max - attack << endl;
		}
	}
	return 0;
}

