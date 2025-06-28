#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int input;
	
	cin >> input;
	
	if (input < 0)
	{
		cout << "Invalid";
	}
	else 
	{
		float result = (float) input * 9 / 5 + 32;
	
		cout << fixed << setprecision(2) << result << endl;
	}
	
	return 0;
}
