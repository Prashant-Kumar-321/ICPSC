#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main(){

	IOS;
	int arr[] = {5, 6, 7, 12, 19, 2, 13, 52, 89}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int m = 19; 

	int sumWithoutModuloArith = 0; 
	for(int i=0; i<n; ++i){
		sumWithoutModuloArith += arr[i]; 
	}
	cout<< "Without Modulo Arithmatic = "<< sumWithoutModuloArith % m << endl; 

	int withModuloArith = 0; 
	for(int i=0; i<n; ++i){
		withModuloArith = (withModuloArith + arr[i] % m) % m; 
	}
	cout<< "With Modulo Arithmatic = "<< withModuloArith<< endl; 
	

	/* 	
		i=0, (0 + 5%m)%m 
		i=1, ((0+5%m)%m + 6%m)%m
		i=2, (((0+5%m)%m + 6%m)%m + 7%m) % m 
		i=3, ((((0+5%m)%m + 6%m)%m + 7%m) % m + 12%m)%m
	*/

	return 0;
}