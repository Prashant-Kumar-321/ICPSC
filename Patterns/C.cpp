#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n; 
	cin>> n; 

	// 2nd Diagonal 

	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i+j == n-1){
				cout<< "X"; 
			}else{
				cout<< " "; 
			}
		}
		cout<< '\n';
	}

	return 0;
}