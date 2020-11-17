#include<iostream>
using namespace std;
int pos(int [], int, int);
int main()
{
	int arr[20], n, item;
	cout<<"Enter the size of your array : ";
	cin>>n;
			// taking input in the array
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
		// getting the element to be deleted and the index also
	int index;
	cout<<"Enter the element to be deleted : ";
	cin>>item;
	index = pos(arr, n, item);
	//cout<<"Index is : "<<index<<endl;
			// deleting the item 
	if(index != -1){
		arr[index] = 0;
	}
			// shifting the elements of the array
	for(int i=index; i<n-1; i++){
		arr[i] = arr[i+1];
	}
	n -= 1;
			// displaying the final array
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
		// pos function
int pos(int arr[], int n, int item){
	for(int i=0; i<n; i++){
		if(arr[i] == item){
			return i;
		}// end of if 
	}// end of loop
	return -1;
}







