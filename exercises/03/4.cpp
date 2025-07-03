#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	float s = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		s += (float) 1/i;
	}
	
	cout << fixed << setprecision(2) << s << endl;
	
	return 0;
}

