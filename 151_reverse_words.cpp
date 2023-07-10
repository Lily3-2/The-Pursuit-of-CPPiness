// LC - 151. Reverse Words in a String


#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string temp = "";
    stack<string>st;
    for(int i=0; i<s.size();i++){
        char ch = s[i];
        if(ch == ' '){
            if(temp != "")
                st.push(temp);
            temp = "";
        }

        else
        temp+=ch;
    }

    if(temp!=""){
        st.push(temp);
    }
    string ans = "";

    while(!st.empty()){
        ans+=(st.top()+" ");
        st.pop();
    }
    ans.pop_back();

    return ans;
    
}
int main() {
    string s;
    getline(cin, s); // read the entire line of input even the whitespaces
    cout << reverseWords(s);
    return 0;
}