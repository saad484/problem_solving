#include<iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
	int n, k;	
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}	
	int ans=0;
	for(int i=0; i<k; i++){
		if(arr[i]<= k){

		}
		else{
			ans++;
		}
	}
	cout << ans <<endl;
	}
}
