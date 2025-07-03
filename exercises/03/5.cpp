#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	float s = 0;
	
	cin >> n;
	
	for (int i = 2; i <= n; i+= 2){
		s += (float) 1/i;
	}
	
	cout << fixed << setprecision(2) << s << endl;
	return 0;
}

