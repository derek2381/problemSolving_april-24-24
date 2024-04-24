// problem link
// #include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    stack<int> stkval, stkid;
	    int flag = 0;
	    queue<int> q;
	    vector<int> arr(n);

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	        q.push(arr[i]);
	    }


	    while(q.size() > 1){
	        if(flag == 0){
	            int val;
	            if(q.size() > 1){
	                // move -1
	                val = q.front();

	                q.push(val);
	                stkid.push(flag);
	                stkval.push(val);
	                q.pop();
	               // cout << stkid.top() << " " << stkval.top() << endl;
	            }

	            int count = 0;
	            // move - 2
	            while(q.size() > 1 && count < 1){
	                val = q.front();
	                stkid.push(flag);
	                stkval.push(val);
	                q.pop();
	                count++;
	               // cout << stkid.top() << " " << stkval.top() << endl;

	            }
	            flag = 1;
	        }else{

	            int val,count = 0;
	            while(q.size() > 1 && count < 2){
	                // move - 1
	                val = q.front();
	                q.push(val);
	                stkid.push(flag);
	                stkval.push(val);
	                q.pop();
	                count++;
	               // cout << stkid.top() << " " << stkval.top() << endl;
	            }


	            if(q.size() > 1){
	                // move - 2
	                val = q.front();
	                stkid.push(flag);
	                stkval.push(val);
	                q.pop();
	               // cout << stkid.top() << " " << stkval.top() << endl;
	            }
	            flag = 0;
	        }
	    }


	    cout << flag << " " << q.back() << endl;
	}

}
