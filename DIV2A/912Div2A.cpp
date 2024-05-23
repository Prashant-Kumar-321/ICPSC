 void sove(){
	int n, k; 
	cin>> n>>k; 
	int nums[n]; 
	for(int i=0; i<n; ++i)cin>> nums[i]; 

	if(k == 1){
		bool sorted = true;  
		for(int i=1; i<n; ++i){
			if(nums[i] < nums[i-1]) {
				cout<< "No "<< '\n'; 
				sorted =  false;  
				break;  
			}
		}
		if(sorted)
			cout<< "Yes \n"; 
		
	}else{
		cout<< "yes \n"; 
	}
}