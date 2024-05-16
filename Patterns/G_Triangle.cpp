#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n; 
	cin>> n; 

	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i<=j) cout<< "X"; 
			else cout<< " "; 
		}
		cout<< endl; 
	}

	return 0;
}