#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    for(int i = 0; i < S.length()/2; i++){
        if(S[i]!=S[S.length() - i - 1]){
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    string S = "ABCDCBA";
    cout<< isPalindrome(S);
    return 0;
}