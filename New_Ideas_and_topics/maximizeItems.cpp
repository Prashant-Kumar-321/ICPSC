
// Prefix sum 
// Precomputation 



// Given prices of n items of a shop 
// budget 
// find maximum number of items we can buy in the given budget 

void solve(void) {
	int n; 
	int budget; 
	cin>> n>> budget; 
	int prices[n]; 

	for(int i=0; i<n; ++i) cin>> prices[i]; 

	sort(prices, prices+n); // O(nlogn) 

	int items = 0; 
	
	// buying items greedly 
	for(int i=0; i<n; ++i){
		if(budget >= prices[i]){  // do we have enough budget to buy current item 
			items++; 
			budget -= prices[i]; 
		}else {
			break; 
		}
	}	

	cout<< items<< '\n';
}

// TC -> O(nlogn ) 


// Q query given 
void solve(void) {
	int n; 
	int q; 
	cin>> n>> q; 
	int prices[n], query[q]; 
	for(int i=0; i<n; ++i) cin>> prices[i]; 
	for(int i=0; i<q; ++i)cin>> query[i]; 

	sort(prices, prices+n); // O(nlogn) 

	// precompute => build prefixSum of price of items 
	int prefixSum[n]; 
	prefixSum[0] = prices[0]; 
	for(int i=1; i<n; ++i){
		prefixSum[i] = prefixSum[i-1]+prices[i]; 
	}

	int cnt = 0; 
	// processing every query 
	for(auto& budget: query){
		auto items = upper_bound(prefixSum, prefixSum+n, budget)-prefixSum;
		
		if(cnt>0) {
			cout<< '\n';
		} 
		cout<< items; 
		cnt++; 

	}
	cout<< '\n'; 
}
// TC -> O(max(nlogn, qlogn)) 