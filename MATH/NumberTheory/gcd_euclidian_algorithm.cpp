#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

// Recursive Euclidean algorithm  
int gcd(int a, int b){
	if(b == 0){
		return a; 
	}
	return gcd(b, a%b);
}

// Iterative Euclidean algorithm 
int hcf(int a, int b){
	 a = abs(a), b = abs(b); 
	while(b!=0){int temp = a; a = b; b = temp%b;}
	return a; 
}

// TC -> O(log n), n = min(a, b) 


int main(){

	IOS;
	int a, b; 
	cin>> a>> b; 

	// cout<< "GCD = "<< hcf(a, b)<< '\n'; 
	cout<< "GCD = "<< gcd(a, b)<< '\n'; 

	return 0;
}