#include<iostream>
using namespace std;
void merg_sort(int [], int [], int [], int n);
int main()
{
	int a[7] = {2, 5, 7, 8, 9, 12, 13};
	int b[5] = {3, 5, 6, 9, 15};
	int size = 7+5;
	int c[size];
	merg_sort(a, b, c, size);
	for(int i=0; i<size; i++){
		cout<<c[i]<<"  ";
	}
	return 0;
}
void merg_sort(int a[], int b[], int c[], int n){
	int ai = 0;
	int bi = 0;
	int ci = 0;
	char check;
	while(ci<n-1){
		if(a[ai]<b[bi]){
			c[ci] = a[ai];
			ai = ai + 1;
			ci = ci + 1;
			check = 'a';		
		}//end if
		else{
			c[ci] = b[bi];
			bi = bi + 1;
			ci = ci + 1;
			check = 'b';
		}//end else
	}// end of while loop
	
	if(check == 'a'){
		c[ci] = b[bi];
	}
	else{
		c[ci] = a[ai];
	}
}






