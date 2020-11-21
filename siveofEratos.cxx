#include<iostream>
using namespace std;
void sive(int);
int main(){
	int n; 
	cout<<"Enter the n term : ";
	cin>>n;
	sive(n);
	
	return 0;
}
void sive(int n){
	int arr[50] = {0};
	for(int i=2; i<=n; i++){
		if(arr[i] == 0){
			for(int j = i*i; j<=n; j+=i){
				arr[j] = 1;
			}//end of inner loop
		}// end of if statement 
	}// end of outter loop
	for(int i=2; i<=n; i++){
		if(arr[i]==0){
			cout<<i<<"  ";
		}
	}
}





