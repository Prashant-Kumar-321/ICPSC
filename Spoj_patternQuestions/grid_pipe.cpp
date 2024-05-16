#include<iostream>
using namespace std;

#define BRK cout<< '\n'; 

void solve(){
	int N, M, H, W; 

	cin>> N>> M>> H>> W; 
	auto rows = N*(H+1) + H; 
	auto cols = M*(W+1) + W; 

	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			if(i%(H+1) == H){
				if(j%(W+1) == W) cout<< '+'; 
				else cout<< '-'; 
			}else{
				if(j%(W+1) == W) cout<< '|'; 
				else cout<< '.'; 
			}
		}
		BRK; 
	}
	BRK;  
}


int main(int argc, char* agrv[])
{
	ios_base::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0); 

	int TC; 
	cin>> TC; 

	while(TC--){

		solve(); 
	}

	return 0;
}