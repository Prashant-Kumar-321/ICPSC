#include<iostream>
using namespace std;

void solve(){
	int N, M, S; 

	cin>> N>> M>> S; 

	for(int i=0; i<N*(S+1)+1; ++i){
		for(int j=0; j<M*(S+1)+1; ++j){
			if(i%(S+1) == 0 || j%(S+1) == 0){
				cout<< '*'; 
			}else if((i-j) % (2*(S+1)) == 0){
				cout<< "\\"; 
			}else if((i+j) % (2*(S+1)) == 0){
				cout<< '/'; 
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