#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	/* 
	because of finding the min of holiday and max of holiday 
	min_days_off start with n then if find the lower then min_days_off is this value
	similarly with max_days_off
	*/
	int min_days_off = n, max_days_off = 0;
	
	// check start day from Monday(0) to Sunday(6)
	for(int start = 0; start < 7; ++start){
		int days_off = 0;
		for(int i = 0; i < n; ++i){
			int day_of_week = (start + i) % 7;
			
			// if current day is Sunday or Saturday
			if(day_of_week == 5 || day_of_week == 6){
				days_off++;
			}
		}
		
		// find the minimum holidays
		min_days_off = min(min_days_off, days_off);
		
		// find the maximum holidays
		max_days_off = max(max_days_off, days_off);
	}
	
	cout << min_days_off << " " << max_days_off << endl;
	
	return 0;
}

