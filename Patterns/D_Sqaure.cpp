#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n; 
	cin>> n; 
	
	// Square with diagonal 
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i == 0 || i == n-1 || j == 0 || j == n-1 || i == j || i+j == n-1){
				cout<< "*"; 
			}else{
				cout<< " "; 
			}
		}
		cout<< '\n';
	}

	return 0;
}