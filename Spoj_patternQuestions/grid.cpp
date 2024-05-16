#include<iostream>
using namespace std;

void solve(){
	int N, M; 

	cin>> N>> M; 

	for(int i=0; i<3*N+1; ++i){
		for(int j=0; j<3*M+1; ++j){
			if(i%3 == 0 || j%3 == 0) cout<< '*'; 
			else cout<< '.'; 
		}
		cout<< '\n'; 
	}
	cout<< '\n'; 
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