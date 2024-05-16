#include<iostream>
using namespace std;

void solve(){
	int N, M, S; 

	cin>> N>> M>> S; 
	S *= 2; 
	auto rows = N * S; 
	auto cols = M * S; 

	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			if(i%S == j%S + S/2 || i%S == j%S-S/2){
				cout<< "\\"; 
			}else if(i%S+j%S == S/2-1 || i%S+j%S == S + S/2 - 1){
				cout<< '/'; 
			}
			else {
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