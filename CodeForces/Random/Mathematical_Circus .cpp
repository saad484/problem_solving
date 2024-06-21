//Mathematical Circus

/*
	Author: Saad AIDDI
*/

#include<iostream>

using namespace std;

 main(){
int t;
cin >>t;

while(t--){
	int n, k;
	cin>>n>>k;
	if(k%4==0){
		cout<<"NO\n";
		continue;
	}
	
	if(k%4==1){
		cout<<"YES\n";
	for(long long i=1; i<n; i+=2)
		cout<<i<<" "<<i+1<<endl;
		continue;
	}
	
	if(k%4==2){
		cout<<"YES\n";
		for(long long i=1; i<n; i+=2)
			if(i%4==1)
			cout<<i+1<<" "<<i<<endl;
			else 
			cout<<i<<" "<<i+1<<endl;
	}
	
	if(k%4==3){
		cout<<"YES\n";
		for(int i=1; i<n; i+=2)
		cout<<i<<" "<<i+1<<endl;
		continue;
		}
	}
	
}

