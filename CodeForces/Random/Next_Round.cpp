/*
Author: Saad AIDDI
*/

#include<iostream>

using namespace std;

int main(){
	int n, k;
	int arr[105]{};
	int cnt=0;
	
	cin>>n>>k;
	
	for (int i=1; i<=n; i++)
		cin>>arr[i];

	for (int i=1; i<=n; i++ ){
			if(arr[i] >= arr[k] && arr[i] != 0){
				cnt++;
				}
		}
		
	cout << cnt;
	return 0;
}

