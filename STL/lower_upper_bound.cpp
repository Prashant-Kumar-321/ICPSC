    // Problem
    // We get three type of queries
    // 1. New number x is added 
    // 2. Find the number <= x
    // 3. Find the number >= x
    // Which data structure to use?


#include<iostream>
#include<set>
using namespace std; 


int main(){
	set<int> s; 
	s.insert(2); 
	s.insert(3); 
	s.insert(8); 
	s.insert(17); 
	s.insert(10); 
	// 2, 3, 8, 10, 17 

	// first number >= 17 
	auto it = s.lower_bound(17); 
	if(it != s.end()){
		cout<< *it<< '\n'; 
	}
	
	// first number >= 23 
	it  = s.lower_bound(23); 
	if(it != s.end()){
		cout<< *it<< '\n'; 
	}else{
		cout<< "No element greater than or equal to 23"<< '\n'; 
	}

	// first number >= 5  
	it = s.lower_bound(5); 
	if(it != s.end()){
		cout<< *it<< '\n'; 
	}


	// first number <= 3 
	it = s.upper_bound(3); 
	if(it != s.begin()){
		it--; 
		cout<< *it<< '\n'; 
	}

	// first number <= 0 
	it = s.upper_bound(0); 
	if(it != s.begin()){
		it--; 
		cout<< *it<< '\n'; 
	}
	else {
		cout<< "No element less than or equal to 0"<< '\n'; 
	}

	// first number <= 9 
	it = s.upper_bound(9); 
	if(it != s.begin()){
		it--; 
		cout<< *it<< '\n'; 
	}

	return 0; 
}