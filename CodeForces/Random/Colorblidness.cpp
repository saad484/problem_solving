// Colorblindless
/*
Author: Saad AIDDI
*/

#include<iostream>
#include<string>

using namespace std;

	string s;
	
int main(){
	int t;
	cin >> t;
	
	
	
	while(t--){
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		
		int A = 0;

		for (int i = 0; i < n; i++ ){
			if(s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B')){
				A++;
			}
			
			else if(s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B')){
			A++;
		}
		
	}
	if(A > 0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
		
	}
}
