#include<iostream>
using namespace std; 

using ll = long long; 

// Function checks if a number is prime 
bool isPrime(ll num){
	if(num <= 1) {  // special case 1 is not considered as prime 
		return false; 	
	}

	// if num is prime, then it won't have any divisor in the range [2....sqrt(N)]

	for(ll i=2; i*i <= num; ++i){  //Loop iterations counts => sqrt(num) 
		if(num % i == 0) return false; 
	}	
	return true; 
}



// Driver code 
int main(){	
	int num; 
	cin>> num; 

	isPrime(num) ? cout<< num<< " is prime" : cout<< num<< " is not prime"; 
	cout<< '\n'; 

	return 0; 
}