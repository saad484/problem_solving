#include<iostream>
#include<string>
#include <unordered_map>

// Roman to integer Leet code 
using namespace std;

class Solution {
public:
	int res = 0;
	int romanToInt(string s) {
		unordered_map<char, int> romans{
			{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}
		};
		for (int i = 0; i < s.length(); i++){
			if (i + 1 < s.length() && romans[s[i]] < romans[s[i + 1]]){
			
				res -= romans[s[i]];
			}
			else{
				
				res += romans[s[i]];
		}
			}
			
			cout << "the output is: "<< res << endl;
	}
};



int main()
{
	Solution test;

	test.romanToInt("III");

	
	return 0;
}


