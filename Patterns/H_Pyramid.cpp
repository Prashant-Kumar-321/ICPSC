#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n, k;  
	cin>> n; 
	cin>> k;

	for(int i=0; i<n; ++i){
		for(int j=0; j<k*(2*n-1)-(k-1); ++j){
			if(i+j%(2*n-2) >= n-1 && i >= j%(2*n-2)-(n-1)){
				cout<< "X "; 
			}else{ 
				cout<< "  "; 
			}
		}
		cout<< endl; 
	}

	return 0;
}