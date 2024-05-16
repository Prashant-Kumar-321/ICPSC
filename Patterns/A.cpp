#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n; 
	cin>> n; 

	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cout<< "X"; 
		}
		cout<< '\n'; 
	}

	/* 	Canavas and Canvas has some size 
		Canvas Size = N X N 
	 */
	return 0;
}