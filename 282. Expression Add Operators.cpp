class Solution {
public:
vector<string>ans;
void helper(int i,string num,int target,const string& res,long eval,long residue)
{
    if(i==num.size())
    {
        if(eval==target){
        ans.push_back(res);
        return;
    }
    }
    string currStr;//track of curr number
    long s=0;

    //backtrack
    for(int j=i;j<num.size();j++){

        //handling leading 0
        if(j>i && num[i]=='0')
        {
            return;
        }
        currStr+=num[j];
        s=s*10+num[j]-'0';//Pura number banao

        if(i==0)
        {
            helper(j+1,num,target,res+currStr,s,s);
        }else{
        helper(j+1,num,target,res + "+" + currStr,eval+s,+s);
        helper(j+1,num,target,res + "-" + currStr,eval-s,-s);
        helper(j+1,num,target,res + "*" + currStr,eval - residue + residue*s,residue*s);
        }
    }
}
    vector<string> addOperators(string num, int target) {
        helper(0,num,target,"",0,0);
        return ans;
    }
};
