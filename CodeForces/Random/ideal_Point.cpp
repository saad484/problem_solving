#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

using namespace std;

void solve(){
	
	ll n, k; cin >> n >> k;
	ll st = 0, end = 0;
	for(ll i=0; i<n; i++){
		ll l,r; cin >> l >> r;
		if(l==k) st++;
		if(r==k) end++;
	}
	if (st>0 and end > 0) cout << "YES" << end;
	else cout << "NO" << endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while(t--){
		solve();
	}
	
	
	return 0;
}
