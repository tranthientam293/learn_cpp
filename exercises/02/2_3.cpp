#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	
	cin >> a >> b >> c;
	
	int result = a*(b+c) + b*(a+c);
	
	cout << result;
	return 0;
}
