#include<iostream>
using namespace std;
void siveOfCount(int);
int main(){
	int n;
	cout<<"Enter the n th term : ";
	cin>>n;
	siveOfCount(n);
	return 0;
}
void siveOfCount(int n){
	int arr[50] = {0};
	int max = 0;
	int count = 0;
	int ae;
	int as;
	
	for(int i=0; i<=n; i++){
		if(arr[i] == 0){
			for(int j = i*i; j<=n; j+=i){
				arr[j] = 1;
			} // end of 2nd loop
		} // end of if 
	} //end of 1st loop
	for(int i=2; i<=n; i++){
		if(arr[i]==1){
				count++;
				if(count > max){
					max = count;
					ae = i;
					as = i-(max-1);
				}
		}//end of if
		else{
			count = 0;
		}//end of else
	}// end of for loop
	cout<<"There are no prime between "<<as<<"and"
	<<ae<<endl;
	cout<<"That is "<<max<<"consicutive integer"<<endl;
	
}






