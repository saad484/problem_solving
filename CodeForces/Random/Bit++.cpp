#include<iostream>
#include<string>

using namespace std;
int main(){
int n;
string x;
int res = 0;

cin >> n; 

while(n--){
    cin >> x;
    
    if((x=="X++") || (x == "++X")){
        res++;
    }
     if((x=="X--") || (x=="--X")){
        res--;
    }
}

    cout << res << endl;
    return 0;
}