#include<iostream>

using namespace std;

void solve(){
int n, x; cin >> n >> x;
if(n<=2){
    cout << "1\n";

}else{
    n-=2;
    cout << (n+x-1)/x+1 << '\n';
}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

int t;  cin >> t;

while(t--){
solve();

}

    return 0;
}
