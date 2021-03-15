#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i=0,cont=0,x;
	cin>>n>>k;
	int arr[n];
	while(i<n){
		cin>>arr[i];
		i++;
	}
	x=arr[k-1];
	i=0;
	while(i<n){
		if(arr[i]>=x && arr[i]>0) cont++;
		i++;
	}
	cout<<cont;
}
