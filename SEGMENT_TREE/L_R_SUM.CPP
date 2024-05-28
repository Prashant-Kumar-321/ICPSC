#include<iostream>
#include<vector> 
using namespace std; 

vector<long long> tree; // segment tree 
vector<int> A; 

// create segment tree
void build(int node, int start, int end){
	
	// leaf node 
	if(start == end) {
		tree[node] = A[start]; 
		return; 
	}

	int mid = start + (end-start)/2; 

	// compute value of left child 
	build(2*node, start, mid); 

	// compute value of right child 
	build(2*node+1, mid+1,  end); 

	// current node value 
	tree[node] = tree[2*node] + tree[2*node+1]; 
}
// O(logN) 

void update(int node, int start, int end, int i, int x){

	// base case when reached to desired index 
	if(start == end){ // start == end == i
		tree[node] = x; 
		return; 
	}

	int mid = start + (end-start)/2; 

	if(i<=mid) { // desired index is on the left branch 
		update(2*node, start, mid, i, x); 
	}
	else { // desired index is on the right branch 
		update(2*node+1, mid+1, end, i, x); 
	}

	// update the cureent index 
	tree[node] = tree[2*node] + tree[2*node+1]; 
}
// O(logN) 

int query(int node, int start, int end, int lq, int rq){

	// node range is within query range 
	if(start >= lq && end <= rq){
		return tree[node]; 
	}

	// No intersection with query range 
	if(end < lq || start > rq){
		return 0; 
	}
	
	// partial intersection  
	int mid = start + (end-start)/2; 

	// traverse to left branch  
	auto left = query(2*node, start, mid, lq, rq); 

	// traverse to right branch
	auto right = query(2*node+1, mid+1, end, lq, rq); 

	return left + right;  
}
// O(log N) 

int main(){
	int n; 
	cin>> n; 
	A.resize(n); 
	tree.resize(4 * n); 

	for(int i=0; i<n; ++i) cin>> A[i]; 

	build(1, 0, n-1); 
	// for(auto x: tree){
	// 	cout<< x<< " "; 
	// }
	// cout<< endl; 
	cout<< query(1, 0, n-1, 5, 7)<< endl;  
	update(1, 0, n-1, 5, 2); 
	cout<< query(1, 0, n-1, 5, 7)<< endl;  

	// int Q; 
	// cin>> Q; 


	// while(Q--){
	// 	int t, l, r; 
	// 	cin>> t>> l>> r; 

	// 	if(t == 1){ // type one 
	// 		int i, x; 
	// 		cin>> i>> x; 
	// 		update(1, 0, n-1, i, x); 

	// 	}
	// 	else { // type two 
	// 		cout<< query(1, 0, n-1, l, r)<< endl;  
	// 	}
	// }

}