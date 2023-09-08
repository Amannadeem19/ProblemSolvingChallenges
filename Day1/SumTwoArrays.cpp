#include <bits/stdc++.h> 

vector<int> reverse(vector<int> ans){
	int s = 0, end = ans.size()-1;

	while(s < end){
		swap(ans[s], ans[end]);
		s++;
		end--;	
	}
	return ans;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i =  n-1;
	int j = m-1;
	int carry = 0;
	vector<int> ans;

	while(i >= 0 && j >= 0){

		int val1 = a[i];
		int val2 = b[j];
		int sum = val1 + val2 + carry;

		carry = sum / 10;
		sum = sum % 10;

		ans.push_back(sum);
		i--;
		j--;
	}
	// first case
	
	// if a[1,2,3,4] = 1234
	// b[6]          =    6

	while(i >=0 ){
		int sum = a[i] + carry;
		carry = sum / 10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}

	// second case
	
	// if a[6]            =   6		   
	// b[1,2,3,4]         =1234    

	while(j >=0 ){
		int sum = b[j] + carry;
		carry = sum / 10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	// third case 
	//a = 999
	//b = 999

	while(carry != 0){
		int sum = carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
	}
	return reverse(ans);
	

}
