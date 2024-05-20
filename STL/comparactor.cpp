#include<vector>
#include<algorithm> 
#include<iostream>
using namespace std; 

int main(){	
	vector<int> v = {1, 3, 8, 1, 7, 3, 98, 23, 65}; 

	// sort(v.begin(), v.end(), less<int>()); // ascending order 
	// sort(v.begin(), v.end(), greater<int>()); // descending order
	// for(auto& x: v){
	// 	cout<< x<< ' '; 
	// }
	// cout<< '\n';
	// O(nlogn)  


	// Compare Function
	// compare function return true if sum(first and second value of pair is smaller or else return fale) 
	auto customCompare = [](const pair<int, int>& a, const pair<int,int>& b){
		if(a.first + a.second <= b.first+b.second) return true; 
		else return false; 
	}; 


	vector<pair<int, int>> vp; 
	vp = {make_pair(1, 3), make_pair(-2, -3), make_pair(0, 2), make_pair(4, -3)}; 

	// sort the given vector of pair on the basis of second element of pair 
	// sort(vp.begin(), vp.end(), [](const pair<int,int>& lhs, const pair<int,int>& rhs){
	// 	if(lhs.second < rhs.second) return true; 
	// 	else if(lhs.second == rhs.second){
	// 		if(lhs.first > rhs.first){
	// 			return true; 
	// 		}
	// 		else {
	// 			return false; 
	// 		}
	// 	}
	// 	else return false; 
	// }); 

	// custome compare functions 
	// return true if [a] should come before [b]
	// just focus on two element that when a should come before b 

	sort(vp.begin(), vp.end(), customCompare); 

	for(auto& p: vp){
		cout<< p.first<< " "<< p.second<< '\n'; 
	}
	cout<< '\n'; 



	return 0; 
}