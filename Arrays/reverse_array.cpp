#include <iostream>
using namespace std;
 
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
 
int main() {
	int n; cin>>n; //taking size of array as input
	int arr[n];
	// taking array input
	for(int i=0; i<n; i++)
		cin>>arr[i];
	// reversing the array
	int start=0, end=n-1;
	while(start<end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	// printing the reversed array
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
