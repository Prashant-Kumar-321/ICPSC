#include<iostream>
using namespace std;

void solve(){
	int N, M; 

	cin>> N>> M; 

	for(int i=0; i<N; ++i){
		for(int j=0; j<M; ++j){
			if(i==0 || i==N-1 || j == 0 || j == M-1){
				cout<< '*'; 
			}else{
				cout<< '.'; 
			}
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