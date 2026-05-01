class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long>p;
        long long sum=0;

        for(int i=0;i<target.size();i++)
        {
            p.push(target[i]);
            sum+=target[i];

        }
        long long MaxElem,RemSum,Elem;
        while(p.top()!=1)
        {
            MaxElem=p.top();
            p.pop();

            RemSum=sum-MaxElem;

            if(RemSum<=0||RemSum>=MaxElem)
            return 0;

            Elem=MaxElem % RemSum;//most
            if(Elem==0)
            {
                if(RemSum!=1)//RemSum!=1
                return 0;
                else 
                return 1;
            }
            sum=RemSum+Elem;//total sum=remsum+element
            p.push(Elem);
        }
        return 1;
    }
};
