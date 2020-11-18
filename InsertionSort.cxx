#include<iostream>
using namespace std;
void I_sort(int [], int);
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
			// taking input
	cout<<"Enter the elements : "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	I_sort(arr, n);
		// displaying the array
	cout<<"The sorted array : "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
	// creating the function
void I_sort(int arr[], int n){
	for(int i=1; i<n; i++){ // i = 2
		int current = arr[i];// arr[2]
		int j = i-1;			// j = 2 -1 = 1
		while(arr[j]>current && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
}







