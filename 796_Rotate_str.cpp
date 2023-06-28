// LC = 796. Rotate String

bool rotateString(string s, string goal) {
    //string s2 = s;
    bool ans;
    if(s.length() != goal.length()) {
        return false;
    }
    string concatS = s + s;

for (int i = 0; i < concatS.length() - goal.length() + 1; i++) {
    if (concatS.substr(i, goal.length()) == goal) {
        return true;
    }
}

return false;
}