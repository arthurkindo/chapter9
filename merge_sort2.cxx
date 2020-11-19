#include<iostream>
using namespace std;
void merg_sort(int [], int [], int [], int n);
int main()
{
	int a[5] = {2, 5, 8, 9, 12};
	int b[7] = {16, 12, 10, 8, 7, 3, 1};
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
	int bi = 6;
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
			bi = bi - 1;
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






