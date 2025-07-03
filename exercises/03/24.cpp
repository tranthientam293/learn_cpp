#include <iostream>

using namespace std;

int main(){
	int n, m;
	
	cin >> n >> m;
	
	int product_1 = 1;
	int product_2 = 1;
	int product_3 = 1;
	
	for(int i = 2; i < m + n; i++){
		product_1 *= i;
		
		if(i < n){
			product_2 *= i;
		}
		
		if(i <= m){
			product_3 *= i;
		}
	}
	
	cout << product_1 / (product_2 * product_3) << endl;
	
	return 0;
}

