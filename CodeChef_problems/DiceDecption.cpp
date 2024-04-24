// problme link
// https://www.codechef.com/START131D/problems/DIDE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    long long int total = 0;
	    cin >> n >> k;
	    vector<int> arr(n);

	    for(int i = 0; i< n;i++){
	        cin >> arr[i];
	        total += arr[i];
	       // if((7 - arr[i]) > arr[i]){
	       //     arr[i] =  7- arr[i];
	       // }
	    }

	    sort(arr.begin(), arr.end());

	    for(int i = 0;i < n;i++){
	        if((7 - arr[i]) > arr[i] && k > 0){
	            total -= arr[i];
	            total += 7 - arr[i];
	            k--;
	        }
	    }
	    cout << total << endl;
	}

}
