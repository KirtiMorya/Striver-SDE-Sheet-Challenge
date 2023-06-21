#include<bits/stdc++.h>
bool check(char &a, char &b){
    if((a=='{' && b=='}') || (a=='[' && b==']') || (a=='(' && b==')')){
        return true;
    }
    return false;
}
bool isValidParenthesis(string s)
{
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
        else if(st.empty()==false && check(st.top(),s[i])==true){
                st.pop();
        }
        else{
            return false;
        }
    }
    if(st.empty()==true){
        return true;

    }
    return false;

}