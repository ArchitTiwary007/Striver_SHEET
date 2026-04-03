class Solution {
public:
    string reverseWords(string s) { 
       //palindrome check m bhi help aaega!!
    //    vector<string>words;//vector to store words!!
    //    string word="";//temp string to store single word!!
    //    for(int i=0;i<s.size();i++)
    //    {
    //     if(s[i]!=' ')
    //     word+=s[i];

    //     else
    //     {
    //         if(!word.empty())
    //         {
    //             words.push_back(word);
    //             word="";
    //         }
    //     }
    //    }
    //    //push last word if it exists
    //    if(!word.empty()){
    //    words.push_back(word);
    //    }
    //    reverse(words.begin(),words.end());//words wale ka reverse
    //    string result="";
    //    for(int i=0;i<words.size();i++)
    //    {
    //     result+=words[i];
    //     if(i<words.size()-1)
    //     result+=" ";
    //    }
    //    return result;

    //method 2(optimised!!)

    string result="";
    vector<string>word;
    int i=s.size()-1;//last pe 

    while(i>=0)
    {
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
        if(i<0) break;

        int end=i;
        while(i>=0 && s[i]!=' ')
        i--;

        word.push_back(s.substr(i+1,end-i));

    }
    for(int j=0;j<word.size();j++)
       {
        if(j>0) result+=" ";
        result+=word[j];
       }
    return result;
    }
};
