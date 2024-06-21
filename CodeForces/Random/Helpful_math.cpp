/*Helpful math*/

/*
	Author: Saad AIDDI
*/

#include<iostream>

using namespace std;

int main(){
	int c1=0, c2=0, c3=0;
	
	string s;
	cin>>s;
	
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1')
        {
            c1++;
        }
        else if(s[i] == '2')
        {
            c2++;
        }
        else if(s[i] == '3')
        {
            c3++;
        }
    }
    for(int i=0; i<c1; i++){
    	
    	cout<<'1';
    	if((c2== 0 && c3==0)&& i == c1-1){
    		cout<< endl;
		}
		else{
			cout<<"+";
		}
	}
	for(int i=0; i<c2; i++){
		cout<<"2";
		if(i==c2-1 && c3==0){
			cout<<endl;
		}else{
			cout<<"+";
		}
	}
	for(int i=0; i<c3; i++){
		cout<<"3";
		if(i==c3-1){
			cout<<endl;
		}else{
			cout<<"+";
		}
	}
	
	
	return 0;
}
