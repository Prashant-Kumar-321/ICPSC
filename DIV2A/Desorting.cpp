void solve(){
	int n; 
	cin>> n; 

	vector<int> nums(n); 
	for(auto& e: nums) cin>> e; 

	int mindiff = (int)inf; 

	for(int i=1; i<n; ++i){
		if(nums[i] - nums[i-1] < mindiff){
			mindiff = nums[i]-nums[i-1]; 
		}
		// when array is already unsorted 
		if(nums[i] < nums[i-1]) {
			cout<< 0<< '\n'; 
			return; 
		}
	}

	int ans = mindiff/2 + 1; 
	cout<< ans<< '\n'; 
}