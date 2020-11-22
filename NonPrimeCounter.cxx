#include<iostream>
using namespace std;
void siveOfEra(int);
int main(){
	int n;
	cout<<"Enter n ( <= 100) : ";
	cin>>n;
	siveOfEra(n);
	return 0;
}
void siveOfEra(int n){
	int max = 0;
	int count = 0;
	int ae;
	int as;
	int arr[100] = {0};
	for(int i=2; i<=n; i++){
		if(arr[i] == 0){
			for(int j=i*i; j<=n; j+=i){
				arr[j] = 1;
			}//end of 2nd loop
		}//end of if
	}//end of 1st loop
	for(int x=2; x<=n; x++){
		if(arr[x] == 1){
			count++;
		}//end of if
		else{
			count = 0;
		}//end of else
		
		if(count > max){
			max = count;
			ae = x;
		}// max if 
	}//end of loop
	as = ae - (max-1);
	cout<<"There are no primes between "<<as<<" and "
	<<ae<<endl;
	cout<<"That is "<<max<<" consecutive integers."<<endl;
}







