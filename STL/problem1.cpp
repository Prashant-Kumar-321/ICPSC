#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 

int main(){
	
    // Let's solve a problem using all of these together
    // vector, pairs of different types and sorting
    
    // N student are there. You know their name and marks.
    // Roll Numbers are assigned in the lexograohical order of their names
    // Print the marks in the order of roll numbers


    vector<pair<string, int>> studentMarks;
    studentMarks.push_back({"Rohan", 90});
    studentMarks.push_back({"Puneet", 80});
	studentMarks.push_back({"Puneet", 100}); 
    studentMarks.push_back({"Neha", 44});
    studentMarks.push_back({"Raj", 33});
    studentMarks.push_back({"Kavya", 75});

	auto compare = [](const pair<string, int>& a, const pair<string ,int>& b){
		return a.first < b.first; 
	}; 

	sort(studentMarks.begin(), studentMarks.end(), compare); 

	for(int rolno = 0; rolno < studentMarks.size(); ++rolno){
		cout<< rolno+1<< " " << studentMarks[rolno].second << '\n'; 
	}
	cout<< '\n'; 


	return 0; 
}