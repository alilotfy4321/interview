#include<bits/stdc++.h>
using namespace std;


  

int main(){
	int t;
	cin>>t;
	
	while(t--){
	
	   int n;
	   cin>>n;
	   int x;
	   for(int k=2 ; k<35 ; k++){
	   	 
			int result=pow(2,k)-1;
			if(n%result)
			   continue;
			x=n/result;
			break;   
	   	
	   }
		cout<<x<<"\n";
	}
	
	
	
	return 0;
}
