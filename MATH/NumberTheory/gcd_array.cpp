#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

long long gcd(long long a, long long b){
	if(b == 0) return a; 
	return gcd(b, a%b); 
}

long long lcm(long long a, long long b){
	return (long long )a*b / gcd(a, b); 
}

int gcdArray(int n, int*arr){
	if(n<2) return 0; 

	int g = gcd(arr[0], arr[1]); 

	for(int i=2; i<n; ++i){
		g = gcd(g, arr[i]); 
	}
	return g; 
}
// Nlog(min(a0, a1))

long long lcmArray(int n, int* arr){
	if(n<2) {
		return 0; 
	}

	long long l = lcm(arr[0], arr[1]);
	for(int i=2; i<n; ++i){
		l = lcm(l, arr[i]); 
	} 

	return l; 
}

int arr[(int)1e5+100]; // 1e5 = 100000 + 100 = 100100

void solve() {
	int n;  
	cin>> n; 

	for(int i=0; i<n; ++i){
		cin>> arr[i]; 
	}

	auto g = gcdArray(n, arr);
	auto l = lcmArray(n, arr);  
	cout<< g<< '\n'; 
	cout<< l<< '\n'; 

}


int main(){

	IOS;
	int TC; cin>> TC;

	while(TC--){

		solve(); 

	}

	return 0;
}