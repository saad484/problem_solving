//Stones on the table

/*
Author: Saad AIDDI
*/

#include<iostream>
#include<string>
 
using namespace std;

int n, cnt;
string s;
	
int main(){

	
	cin>>n>>s;

	for(int i=0; i<n; i++){
		
		if(s[i]==s[i+1]){
			cnt++;
		}
		
	}
	cout << cnt <<endl; 
	
return 0;
}


