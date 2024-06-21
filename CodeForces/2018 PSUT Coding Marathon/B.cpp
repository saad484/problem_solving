#include<iostream>
#include<string>


using namespace std; 

void read(int& mask){
string s;
cin >> s;
for(int i = 0; i < s.length();  i++ ){
    int id = s[i] - 'a';
    mask^=(1 << id);    
    }
} 

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int mask = 0;
read(mask);
read(mask);
int cp = __builtin_popcount(mask);
if(cp > 1)
cout << "NO";
else
cout << "YES";

    return 0;
}