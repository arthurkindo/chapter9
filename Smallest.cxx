#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the element :\n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	} 
	int temp = arr[0];
	//int min;
	// the code below will be use in doing selection sort
	// in the same way in selection sort we have to find
	// the smallest element
	for(int i=1; i<n; i++){
		if(arr[i]<temp){
			temp = arr[i];
		}
	}
	cout<<"Smallest element is : "<<temp<<endl;
	return 0;
}







