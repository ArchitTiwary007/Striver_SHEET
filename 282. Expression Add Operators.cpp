class Solution {
public:
vector<string>ans;//return this
void helper(string& num,int target,int i,const string& currStr,long eval,long residue)
{
    if(i==num.size())
    {
        if(eval==target){
        ans.push_back(currStr);
        return;
        }
    }

    string currNumStr;
    long NumVal=0;
    for(int j=i;j<num.size();j++)//Loop as per each level or index
    {
        if(j>i && num[i]=='0') return;//handling 0

        currNumStr+=num[j];//loop ke according level wise numbers nikalo
        NumVal=NumVal*10+num[j]-'0';//str num ka value nikalo

        if(i==0)
        {
            helper(num,target,j+1,currStr+currNumStr,NumVal,NumVal);
        }
        else{
            helper(num,target,j+1,currStr+"+"+currNumStr,eval+NumVal,+NumVal);
            helper(num,target,j+1,currStr+"-"+currNumStr,eval-NumVal,-NumVal);
            helper(num,target,j+1,currStr+"*"+currNumStr,eval-residue + residue*NumVal,residue*NumVal);
        }
    }
}
    vector<string> addOperators(string num, int target) {
        helper(num,target,0,"",0,0);
        return ans;
    }
};
