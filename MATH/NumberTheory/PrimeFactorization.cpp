#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pb push_back 
#define mp make_pair 

using ll = long long; 
using vi = vector<int>;
using ii = pair<int, int>; 
using vii = vector<ii>;  


// Square Root Decomposition 
// Function returns vector of list of prime factors 
vector<ll> findPrimeFactors(ll num){
	vector<ll> primeFactors; 

	// Iterate loop  sqrt(num) times 
	for(ll i=2; i*i <= num; ++i){
		if(num % i == 0){
			while(num % i == 0){
				primeFactors.pb(i); 
				num /= i; 
			}
		}
	}

	// prime factor > sqrt(Num) 
	if(num > 1){
		primeFactors.pb(num); 
	}

	return primeFactors; 
}

// TC -> O(sqrt(N)) 

vector<pair<int, int>> findPrimeFactors(int num) {
	vii primeFactors; 

	for(int i=2; i*i <= num; ++i){
		if(num % i == 0){
			int cnt = 0; 
			while(num % i == 0){
				cnt++; 
				num /= i; 
			}
			primeFactors.pb(mp(i, cnt));
		}
	}

	// prime factor > sqrt(num) 
	if(num > 1){
		primeFactors.pb(mp(num, 1)); 
	}

	return primeFactors; 
}

void solve(){

	int N; 
	cin>> N; 

	auto pfs = findPrimeFactors(N); 

	for(auto pf: pfs){
		cout<< pf.first<< " --- "<< pf.second<< '\n'; 
	}
	cout<< '\n'; 
}


int main(){
	IOS;

	solve(); 

	return 0;
}