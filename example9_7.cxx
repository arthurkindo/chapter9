#include<iostream>
using namespace std;
int * set_(int [], int, int);
int main()
{
	int *ptr;
	int arr[20];
	int size;
	int item;
		// taking the size and element 
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	return 0;
}
// creating set function
int * set_(int arr[], int size; int item){
	int n=0;
	for(int i=0; i<size; i++){
		if(arr[i] == item){
			for(int j=i; j>n; j--){
				arr[j] = arr[j-1];
			}// end of inner for loop
			arr[n]=0;
			n++;
		}// end of if 
	}// end of loop
	return arr;
}








