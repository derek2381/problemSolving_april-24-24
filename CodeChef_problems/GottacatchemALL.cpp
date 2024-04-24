// problem link
// https://www.codechef.com/START131D/problems/GCEA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    long long int total = 0;
	    vector<int> arr(n);
	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	        if((arr[i] * x) >= y){
	            total += y;
	        }else{
	            total += (arr[i] * x);
	        }
	    }

	    cout << total << endl;

	}

}
