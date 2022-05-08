// C++ code to find duplication form (0->n-1) of element
// duplicates in O(n) time O(1) extra space
#include <bits/stdc++.h>
using namespace std;

void findDuplication(int arr[],int n){
    
    //for loob to get index and increase it's size by size
	for(int i=0; i<n ; i++){
      	arr[arr[i]%n]+=n;
	  }
	  
	  //search if value of arr[i]>=2*size the the index is repeated
	  cout<<" Duplicated numbers are...\n { ";
	  for(int i=0 ; i<n ;i++){
	  	if(arr[i]>=2*n){
	  		cout<<i<<" ";
		  }
	  }
	  cout<<" }\n";
	 
}
 
int main()
{
   int arr[]={2,0,5,8,2,5,4,8,9,0,0,5,2,2,6,9,5,2,2,1,5,9,7,3,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   findDuplication(arr,n);
      
 
	
    return 0;
}
