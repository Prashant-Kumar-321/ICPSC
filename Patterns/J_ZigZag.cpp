#include<iostream>
using namespace std;

int main(int argc, char* agrv[])
{

	for(int i=0; i<5; ++i){
		for(int j=0; j< 26; ++j){
			if(i==j%8 || i+j%8 == 8){
				cout<< char('A'+j); 
			}else{
				cout<< " "; 
			}
		}
		cout<< endl; 
	}

	return 0;
}