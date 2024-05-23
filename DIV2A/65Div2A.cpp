

void sove(){
	string str; 
	cin>> str; 

	if(str.size() > 10){
		string ans; 
		ans += str.front(); 
		ans += to_string(str.size()-2); 
		ans += str.back(); 
		cout<< ans<< '\n'; 
		
	}else{
		cout<< str<< '\n'; 
	}
}