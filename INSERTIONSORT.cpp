#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
	
	for(int i=0;i<=n-1;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			int temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			j--;
		}
	}
	
	cout<<"After Insertion sort : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
}

int main(){
	int n;
	
	cout<<"Enter the size of array ";
	cin>>n;
	int arr[n];
	cout<<"Enter array values:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Before sorting";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insertion_sort(arr,n);
	return 0;
	
}
