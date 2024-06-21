#include<iostream>

using namespace std;

int main(){

ios::sync_with_stdio(false);
cin.tie(0);

int n;
int sure = 0;
cin >> n;
while(n--){
    int p, v, t;
    cin>>p>>v>>t;
    if((p+v+t)>=2){
        sure++;

    }
}
cout << sure << '\n';
    return 0;
}