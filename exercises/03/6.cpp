#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	long long s = 0;
	
	for (int i = 1; i <= n; i++){
		s += pow(-1, i)*i;
	}
	
	cout << s << endl;
	
	return 0;
}


