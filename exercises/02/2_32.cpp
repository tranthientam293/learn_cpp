#include <iostream>

using namespace std;

int main(){
	long long a, b, c, d, e;
	
	cin >> a >> b >> c >> d >> e;
	
	long long smallest = a;
	long long secondSmallest = b;
	
	if(a > b) {
		smallest = b;
		secondSmallest = a;
	}
	
	if (c < smallest){
		secondSmallest = smallest;
		smallest = c;
	}
	else if (c < secondSmallest) {
		secondSmallest = c;
	}
	
	if (d < smallest){
		secondSmallest = smallest;
		smallest = d;
	}
	else if (d < secondSmallest) {
		secondSmallest = d;
	}
	
	if (e < smallest){
		secondSmallest = smallest;
		smallest = e;
	}
	else if (e < secondSmallest) {
		secondSmallest = e;
	}
	
	cout << secondSmallest << endl;
	
	return 0;
}
