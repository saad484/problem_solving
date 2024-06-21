#include<iostream>
#include<string>

using namespace std;
int main(){


string S1, S2;

while (cin>>S1>>S2){

for (int i=0; i<S1.size(); i++){
    if(S1[i]>='A' && S1[i]<='Z'){
        S1[i]=S1[i]-'A'+97;
    }
    if(S2[i]>='A' && S2[i]<='Z'){
        S2[i]=S2[i]-'A'+97;
    }
}
for (int i=0; i<S2.size(); i++){
    if (S1[i]<S2[i])
    {
        cout <<"-1\n";
        return 0;
    }
     if (S1[i]>S2[i])
    {
        cout <<"1\n";
        return 0;
    
    }
    
}
        cout << "0\n";
}
return 0;

}