#include<iostream>
#include<iomanip> 
#include<vector> 
#include<unordered_map> 
using namespace std; 

using vi = vector<int>; 
using unm = unordered_map<int, vi>; 

// Precompute divisors of numbers upto N(1000) 
vector<int> divisors[1010]; 
constexpr int N = 1000; 

void precomputeDivisors(){

	for(int i=1; i<=N; ++i){
		for(int j=i; j<=N; j += i){
			divisors[j].push_back(i); 
		}
	}
}
// TC => N * log2 (N) 
// SC => N * N


// Driver functions 
int main(){
	precomputeDivisors(); 
	
	vi elements = {2, 16, 100, 289, 40, 28, 12, 17}; 

	for(auto& n: elements){
		cout<< setw(3)<< n<< " : "; 
		
		for(auto& div: divisors[n]){
			cout<< div<< " "; 
		}
		cout<< '\n'; 
	}

	return 0; 
}
