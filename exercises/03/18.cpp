#include <iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	if (n % 2){
		int num = (n - 3)/2;
		
		cout << num + 1 << endl;
		
		for(int i = 1; i <= num; i++){
			cout << 2 << " ";
		}
		
		cout << 3 << endl;
	}
	else {
		int num = n / 2;
		
		cout << num << endl;
		
		for(int i = 1; i <= num; i++){
			cout << 2 << " ";
		}	
	}
	
	return 0;
}

