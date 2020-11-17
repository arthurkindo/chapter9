#include<iostream>
using namespace std;
int * sort(int [], int);
int main()
{
	int *ptr, n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	ptr = sort(arr, n);
	for(int i=0; i<n; i++){
		cout<<*(ptr+i)<<"  ";
	}
	return 0;
}
	// function declaration
int * sort(int arr[], int n){
	int temp;
	int k;
	for(int i=0; i<n-1; i++){
		k = i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[k]){
				k = j;
			}
		}// end of inner loop
		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}// end of outer loop
	return arr;
}	
	
	
	
	
	
	
	
	
