
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.

	// reverse the array from the specified position
	int end = arr.size()-1;
	m+=1;
	while(m <= end){
		swap(arr[m] , arr[end]);
		m++;
		end--;
		
	}
}

