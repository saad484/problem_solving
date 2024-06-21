#include<iostream>
#include<string>

using namespace std;

string s;

int main(){
cin >> s;
int cnt = 1;
		
for(int i = 0; i < s.length(); i++)	
	{
	if (s[i] == s[i + 1]){
			
			cnt++;

	if(cnt == 7){
	
	cout << "YES";		
	return 0;
	
	}
}else{
		
	cnt = 1;

}
}

cout << "NO";

	return 0;
}
