#include <iostream>

using namespace std;

int main(){
	int n, mi, ci;
	int i = 1;
	int count_mi = 0;
	int count_ci = 0;
	
	cin >> n;
	
	while(i <= n){
		cin >> mi >> ci;
		
		if(mi > ci){
			count_mi++;
		}else if (mi < ci){
			count_ci++;
		}
		
		i++;
	}
	
	if (count_mi > count_ci){
		cout << "Mishka" << endl;
	}else if (count_mi < count_ci){
		cout << "Chris" << endl;
	}else {
		cout << "Friendship is magic!^^" << endl;
	}
	
	
	return 0;
}

