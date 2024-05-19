// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using ll = long long; 

// function finds all divisors 
vector<ll> findDivisors(ll num){
	vector<ll> divisors; 

	for(int i=1; i*i <= num; ++i){ // sqrt(num) 
		if(num % i == 0){
			divisors.push_back(i); 

			if(i*i != num){
				divisors.push_back(num/i); 
			}
		}
	}

	return divisors; 
}
// TC --> sqrt(N) 

// Note : -> Max number of distinct divisors any number N could have is 
// [2 * sqrt(N)]


int main() {
	IOS;

	ll num; 
	cin>> num; 

	auto divisors = findDivisors(num); 

	// TC => O(sqrt(N)) 
	// i | N ==> (N/i) | N 

	cout<< "All divisors \n"; 
	for(auto& v: divisors){
		cout<< v<< " "; 
	}
	cout<< '\n'; 
	cout<< "Numbers of divisors = "<< divisors.size()<< '\n'; 

	return 0;
}