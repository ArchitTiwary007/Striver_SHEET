class Solution {
  public:
  priority_queue<int>l;//max_heap
  priority_queue<int,vector<int>,greater<int>>r;//min_heap
  

  void insert_heap(int x)
  {
      if(l.empty()||x<=l.top())
      
      {
          l.push(x);
          
      }
     
      else
      r.push(x);
      
      balanceheaps();
      
  }
  
  void balanceheaps()
  {
      if(l.size()>r.size()+1){
      r.push(l.top());
      l.pop();
      }
    else if (r.size() > l.size()) {
            l.push(r.top());
            r.pop();
      }
  }
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double>ans;
        for(int x:arr){
        insert_heap(x);
        
        if(l.size()>r.size())
        {
            ans.push_back(l.top());
        }
        else
        {
            ans.push_back((l.top()+r.top())/2.0);
        }
        }
        return ans;
        
    }
};
