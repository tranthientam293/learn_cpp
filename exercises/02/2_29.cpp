#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b;
	
	cin >> a >> b;
	
	int roundedA = round(a);
	int roundedB = round(b);
	
	if (roundedA < a) {
		roundedA += 1;
	}
	
	if (roundedB > b){
		roundedB -= 1;
	}
	
	cout << roundedB - roundedA + 1 << endl;
	
	return 0;
}
