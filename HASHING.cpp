#include<bits/stdc++.h>
using namespace std;
//HASHING USING ARRAY
/*int main(){
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter array values";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int hash[13]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]+=1;
		
	}
	int q;
	cout<<"Enter queries";
	cin>>q;
	while(q--){
		
		int number;
		cin>>number;
		cout<<hash[number]<<endl;
		
	}
	return 0;	
	
}*/


//CHARACTER HASHING IF INPUT CONTAINS ONLY LOWERCASE LETTTERS

/*int main(){
	string s;
	cin>>s;
	
	int hash[26]={0};
	for(int i=0;i<s.size();i++){
		hash[s[i]-'a']++;
	}
	int q;
	cin>>q;
	while(q--){
		char c;
		cin>>c;
		cout<<hash[c-'a']<<endl;
	}
	return 0;
}
*/

//CHARACTER HASHING IF THE STRING CONTAINS BOTH UPPER CASE AND LOWER CASE LETTERS

int main(){
	
	string s;
	cin>>s;
	
	int hash[256]={0};
	for(int i=0;i<s.size();i++){
		hash[s[i]]++;
		
	}
	int q;
	cin>>q;
	while(q--){
		char c;
		cin>>c;
		cout<<hash[c]<<endl;
	}
	return 0;
}





























