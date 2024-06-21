#include<iostream>
#include<string>


using namespace std;

int main (){
string S;
cin >>S;

if(S[0]>='A'&& S[0]<='Z'){
	cout << S;
}	
else{
	S[0]=S[0]-'a'+65;
	cout <<S;
	 
}
	return 0;
}

