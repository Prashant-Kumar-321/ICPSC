
void solve(){
	bool mat[5][5]; 
	int r, c; // location of 1 
	for(int i=0; i<5; ++i){
		for(int j=0; j<5; ++j){
			cin>> mat[i][j]; 
			if(mat[i][j] == 1){
				r = i, c = j; 
			}
		}
	}

	int minSwaps = abs(r-2) + abs(c-2); 
	cout<< minSwaps<< '\n'; 
}