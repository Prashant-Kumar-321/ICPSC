// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

void solve(){


}


int main() {

	IOS;
	int n; 
	cin>> n; 

	auto countDivi = [](int n){
		int div = 0; 
		for(int i=1; i<=sqrt(n); ++i){
			if(n%i == 0){
				div++; 
				if(i != n/i){
					div++; 
				}
			}
		}

		return div; 
	}; 

	vector<int> divs(n+1, 0); 

	for(int i=1; i<=n; ++i){
		divs[i] = countDivi(i); 
	}

	// O(n*sqrt(n))

	// Approach 2 
	// flush  
	divs.clear(); 
	divs.resize(n+1, 0); 

	for(int i=1; i<=n; ++i){
		for(int j=i; j<=n; j+=i){
			divs[j]++; 
		}
	}

	// i=1, j = 1, 2, 3, 4, ... (n)
	// i=2, j=2, 4, 6, 8, 10.... (n/2)
	// i=, j=n ... (n/n = 1)
	// Total number of iterations [ n + n/2 + n/3 + n/4 + n/5 + n/6 + .. + 1 ==> nlogn (approximately) ] 
	// TC -> O(n log(n))

	for(int i=1; i<=n; ++i){
		cout<< i << ": "<< divs[i]<< '\n'; 
	}

	return 0;
}