#include<iostream>
using namespace std; 

#define ll long long 
constexpr int MOD = 1e9+7; // [MOD == prime number]

// pow(a,n, mod)
int binPow(ll base, ll expo, int mod){
	if(expo == 0) return 1; 
	
	if(expo%2 == 1) { // exponent is odd 
		return (base * binPow(base, expo-1, mod)) % MOD; 
	}
	else {
		ll temp = binPow(base, expo/2, mod); 
		ll ans = temp * temp % mod; 
		return ans; 
	}
}

// modulo inverse
// Fermat's little theorem  
int inverse(int x, int mod){
	return binPow(x, mod-2, mod); // mod is prime 
}


int main(){
	// ((a+b)-(c*d))+e^f/g 

	ll a,b,c,d,e,f,g; 
	cin>> a>> b>> c>> d>> e>> f>> g; 

	ll temp1 = (a+b)%MOD; 
	ll temp2 = (c * d ) % MOD;
	ll temp3 = (temp1 - temp2) % MOD; // (((temp1-temp2) % MOD)+MOD) % MOD  ==> ENSURE the temp3 is positive 
	ll temp4 = binPow(e, f, MOD); // e^f % MOD; 
	ll temp5 = temp4 * inverse(g, MOD); // temp4/g % MOD 
	ll temp6 = (temp3 + temp5) % MOD; 


	ll ans = (temp6%MOD+MOD) % MOD; // ENSURE FINAL ANS IS positive 
	cout<< ans<< '\n'; 


	return 0; 
}