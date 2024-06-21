//Chip Game

/*
Author: Saad AIDDI
*/
#include<iostream>


using namespace std;

int main(){
int t;	
cin >> t;
while(t--){
	int n, m;
	cin >> n >> m;
	
	if((n+m)%2 == 0){
		
		cout << "Tonya\n"; 
	}
	else{
		cout << "Burenka\n";
	}
}	
	return 0;
}
