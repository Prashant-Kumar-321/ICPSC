#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

vector<bool> sieveOfErasthosthenes(int n); 

int main(){

	IOS;

	int n; 
	cin>> n; 

	vector<bool> isPrime = sieveOfErasthosthenes(n); 

	for(int i=2; i<=n; ++i){
		if(isPrime[i]){
			cout<< i<< " "; 
		}
	}
	cout<< '\n'; 

	return 0;
}


// precomputing all primes numbes upto n 
vector<bool> sieveOfErasthosthenes(int n){

	vector<bool> isPrime(n+1, true); 
	isPrime[0] = isPrime[1] = false; 

	for(int i=2; i*i <= n; ++i){
		if(!isPrime[i]) continue; 

		// mark false to all multiple of prime number i 
		for(int j= 2*i; j<=n; j+=i){
			isPrime[j] = false; 
		}
	}

	return isPrime; 
}

