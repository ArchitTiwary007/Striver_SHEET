class Solution {
public:
    void reverseString(vector<char>& s) {
        //using stack
        stack<char>stk;
        for(int i=0;i<s.size();i++)
        {
            stk.push(s[i]);//similar to array but its stack
        }
        int i=0;
        while(!stk.empty())//loop & pop and insert till stk is empty!!
        {
            s[i]=stk.top();//s[i] mein top of satck ko daalo
            i++;
            stk.pop();//stk se pop kro
        }
    }
};