#include<iostream>
#include<vector>
using namespace std;

vector <int> reverse(vector <int> v){
	
	int s = 0, end = v.size()-1;
	while(s <= end){
		swap(v[s], v[end]);
		s++;
		end--;
		
	}
	return v;
	
	
}

void print(vector<int> v){
	for(int i = 0; i<v.size(); i++){
		
		cout << v[i] << " ";
	}
}

int main(){
	
	vector<int> vect;
	
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	
	vector <int> ans = reverse(vect);
	print(ans);
}
