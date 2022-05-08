#include<bits/stdc++.h>
using namespace std;

int arrS1[26], arrS2[26];
int indexS1=0,indexS2=0;

bool stringAnagram(string s1,string s2){
	int sizeS1=s1.size();
	int sizeS2=s2.size();
	

	if(sizeS1==sizeS2 ){
		for(int i=0 ; i<sizeS1 ; i++){
			
			indexS1=s1[i]-'a';
		    indexS2=s2[i]-'a';
			arrS1[indexS1]++;
			arrS2[indexS2]++;
			
		}
	}else{
		return false;
	}
	
	for(int i=0 ; i<26; i++){
			if(arrS1[i]!=arrS2[i]){
				return false;
			}
	}
	return true;
}


int main(){
	string s1="llsten";
	string s2="siletn";
	
	cout<<(stringAnagram(s1,s2)?"Angram":"Not Anagram");
	return 0;
}
