// Create movement array for night 
// using movement array find out all possitions kight can attack  


map<pair<int, int>, int> freq; 

void countFreq(int xk, int yk, vector<pair<int,int>>& d){
	for(auto& p: d){
		freq[{xk+p.first, yk+p.second}]++; 
	}
}

void solve(){
	int a, b; 
	int xk, yk, xq, yq; 
	cin>> a>>b >> xk>> yk>> xq>> yq; 

	freq.clear(); // flush for every test case 

	// create movement array 
	vector<pair<int,int>> movement = {{a,b}, {a,-b}, {-a, b}, {-a, -b},{b, a}, {b, -a}, {-b, a}, {-b, -a}}; 

	// last four movement pair is same as first four 
	if(a == b){
		movement.erase(movement.begin()+4, movement.end());  
	}

	countFreq(xk, yk, movement); 
	countFreq(xq,yq, movement); 

	int ans = 0; 
	for(auto [p, f]: freq){
		if(f==2){
			ans++; 
		}
	}

	cout<< ans<< '\n'; 
}
