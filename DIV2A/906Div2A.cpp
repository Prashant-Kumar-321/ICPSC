// just count number of unique element in the given array 
// if 2 or 1 then possible 
// uq 1 100% possible to permute that will meet the condition
// uq 2 ==> freq of one of them must be exactly n/2 where n is size of array 
// else notPossible

void solve(){
	int n; 
	cin>> n; 
	map<int, int> mp; 

	for(int i=0; i<n; ++i){
		int a; 
		cin>> a; 
		mp[a]++; 
	}

	if(mp.size() > 2) cout<< "No\n"; 
	else{
		if(mp.size() == 1) cout<< "yes \n"; 
		else{
			int an = mp.begin()->second; 
			int bn = next(mp.begin())->second; 
			if(/* an == n/2 || bn == n/2 ||  */ abs(an-bn) == 0 || abs(an-bn)==1) {
				cout<< "Yes \n"; 
			}else{
				cout<< "NO\n"; 
			}
		}
	}
}