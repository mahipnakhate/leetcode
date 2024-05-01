class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int ind = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                ind = i;
                break;
            }
        }
        stack<char> st;
        for(int i = 0; i <= ind; i++) st.push(word[i]);
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        for(int i = ind+1; i < word.length(); i++) ans += word[i];
        return ans;
    }
};