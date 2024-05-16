#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{
	int n; 
	cin>> n; 

	for(int i=0; i<20; ++i){
		for(int j=0; j< 4 * n + 5; ++j){
			if(i == j%4 || i+j%4 == 4){
				cout<< "*"; 
			}else{
				cout<< " "; 
			}
		}
		cout<< endl; 
	}

	return 0;
}