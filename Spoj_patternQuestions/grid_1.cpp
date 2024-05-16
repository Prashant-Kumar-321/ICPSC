#include<iostream>
using namespace std; 

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl '\n' 

void solve(){

	int N, M, H, W; 
	cin>> N>> M>> H>> W; 
	auto row = N * (H+1) + 1; 
	auto col = M * (W+1) + 1; 

	for(int i=0; i<row; ++i){
		for(int j=0; j<col; ++j){
			if(i%(H+1) == 0 || j%(W+1) == 0) cout<< '*'; 
			else cout<< '.'; 
		}
		cout<< endl; 
	}
	cout<< endl; 

}


int main(){
	IOS; 

	int TC; 
	cin>> TC; 
	while(TC--){
		solve(); 
	}


	return 0; 
}