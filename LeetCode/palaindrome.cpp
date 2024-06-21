#include<iostream>

using namespace std;

class Solution{
    public:
    bool Palindrome(int x){
        if(x==0)
        cout << "true" <<endl;
        //return true;

        if(x<0)
        cout << "false" <<endl;
        //return false;
        if(x!=0 and x%10)
       cout << "false" <<endl;
       // return false;
        int rev = 0;
        while (x>rev)
        {
            rev = rev*10 + x%10;
            x/= 10;
    if(x==rev)
            cout << "true" <<endl;
            //return true;
        
    if(x==rev/10)     
            cout << "true" <<endl;
            //return true;
        }
        cout << "false" <<endl;
        //return false;    
    }
};

int main()
{
    Solution v;
    v.Palindrome(0);
    return 0;
}
