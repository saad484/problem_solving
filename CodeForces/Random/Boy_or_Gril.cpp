
// Boy or Gril

/*
Author: Saad AIDDI
*/


#include<iostream>
#include<string>

using namespace std;


int pas=1;
int num;
string s;

int main(){	
	cin>>s;
for(int i=0; i<s.size(); i++){
	for(int j=0; j<i; j++){
		if(s[i]==s[j]){
			num++;
		}
	}
	if(num==0){
		pas++;
	}
	num=0;
}
if(pas%2 == 0){
	cout<<"IGNORE HIM!";
}
else{
	cout<<"CHAT WITH HER!";
}
return 0;
	
}
	
