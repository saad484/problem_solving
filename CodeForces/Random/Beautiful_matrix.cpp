#include<iostream>
#include<cmath>

using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int arr[5][5];

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cin >> arr[i][j];
    if(arr[i][j] == 1){
cout << abs(i-2)+abs(j-2);
    }
        }
    }

    return 0;
}