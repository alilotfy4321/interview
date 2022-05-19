#include<bits/stdc++.h>
using namespace std;

subSet(int arr[],int size){
	
	
	//number of set 2^size  == (1<<size);
	//if arr={1,2};
	// masks= [00,01,10,11]   0->take  , 1->leave;
	
	for(int mask=0 ; mask<(1<<size) ;mask++){
		vector<int>v;
		for(int i=0 ; i<size ; i++){
			if(mask & (1<<i)){
				v.push_back(arr[i]);
			}
		}
		cout<<"{";
		
		for(int j=0 ; j<v.size() ;j++){
			
			if(j==(v.size())-1)
				cout<<v[j];
			else
				cout<<v[j]<<",";
			
		}
		cout<<"}\n";
	}
}

int main(){
	
	int arr[]={1,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	subSet(arr,size);
	
	
	return 0;
}
