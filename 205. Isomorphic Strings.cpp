class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //WRONG
        // int n=s.size();
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(s[i]!=t[j])
        //         count++;
        //         else
        //         count--;
        //     }
        //     if(s[i]==s[i+1]&&t[i]==t[i+1])
        //     {
        //         return 1;
        //     }
        //     else if(s[i]==s[i+1]&&t[i]!=t[i+1])
        //     return 0;

        //     else if(s[i]!=s[i+1]&&t[i]==t[i+1])
        //     return 0;

        //     // else return 1;
        // }
        // return 1;

        //correct
        int m1[256]={0},m2[256]={0};
        int n=s.size();
        for(int i=0;i<n;++i)//loop dekho
        {
            if(m1[s[i]]!=m2[t[i]])
            return 0;

            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return 1;
    }
};
