#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	if (n < 1){
		cout << "Invalid\n";
		return 1;
	}
	
	float result = 1 - 1/(1.0*(n+1));
	
	cout << fixed << setprecision(2) <<result << endl;
	
	return 0;
}
