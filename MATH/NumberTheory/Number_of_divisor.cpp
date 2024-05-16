// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main() {

	IOS;
	int num = 17; 
	vector<int> divisors; 
	int div = 0; 

	for(int i=1; i<=sqrt(num); ++i){
		if(num % i == 0){
			if(i != num/i){
				divisors.push_back(i); 
				divisors.push_back(num/i); 
				div += 2; 
			}else { // i  == num/i ==> num is perfect square 
				divisors.push_back(i); 
				div++; 

			}
		}
	}
	// TC => O(sqrt(N)) 
	// i | N ==> (N/i) | N 

	cout<< "All divisors \n"; 
	for(auto& v: divisors){
		cout<< v<< " "; 
	}
	cout<< '\n'; 
	cout<< "Numbers of divisors = "<< div<< '\n'; 



	return 0;
}