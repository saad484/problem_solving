#include<iostream>

using namespace std;

int main(){
	int a, b, res=0;
	cin>>a>>b;
	while(a<=b){
		a*=3;
		b*=2;
		res+=1;
	}
	cout << res;
	return 0;
}
