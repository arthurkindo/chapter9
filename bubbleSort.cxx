#include<iostream>
using namespace std;
void Bsort(int [], int);
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements : "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
		// calling Bsort function
	Bsort(arr, n);
		// displaying array
	for(int i=0; i<n; i++){
		cout<<arr[i]<<"  ";
	}
	return 0;
}
	// function Bsort
void Bsort(int arr[], int n){
	int i=0;
	while(i<n-1){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		n=n-1;
	}
}









