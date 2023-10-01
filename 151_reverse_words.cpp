// LC - 151. Reverse Words in a String
// Return a string of the words in reverse order concatenated by a single space.

#include <bits/stdc++.h>
using namespace std;

// TC AND SC = O(N)

string reverseWords(string s) {
    reverse(s.begin(), s.end());
    string ans;
    int i = 0;
    while(i< s.length()) {
        while(i<s.length() && s[i] == ' ') {
            i++;
        }

        string temp;
        while(i<s.length() && s[i] != ' ') {
            temp = s[i] + temp;
            i++;
        }
        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = ans + ' ' + temp;
            } else {
                ans = temp;
            }
        }
    }
    return ans;
}


/*
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
*/
int main() {
    string s;
    getline(cin, s); // read the entire line of input even the whitespaces
    cout << reverseWords(s);
    return 0;
}