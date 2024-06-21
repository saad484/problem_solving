#include<iostream>
#include<string>

using namespace std;

int main(){
  
  string s;

    cin>>s;
  
    int cntUp = 0;
    int cntLw = 0;
     
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] < 97){
            
            cntUp++;
        }
        else{
		
            cntLw++;
        }
    }
    
    if(cntUp > cntLw){
    for(int i = 0; i < s.length(); i++){
	if(s[i] >= 97){
		s[i] =  s[i] - 32;
		}
	}
}else{
	for(int i = 0; i < s.length(); i++){
	if(s[i] < 97){
		s[i] =  s[i] + 32;
		}
	}
}
cout << s;
  return 0;          
       
	    }
        
    
  


