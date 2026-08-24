class Solution {
public:
//T:O(N!)
//S:O(N^2)
void find(int row,int n,vector<vector<string>>&ans,vector<string>&board,vector<bool>&column,vector<bool>&leftdiag,vector<bool>&rightdiag)
{
    if(row==n)//last row tk traversal ho gya hai!!
    {
    ans.push_back(board);
    return;
    }


    for(int j=0;j<n;j++)
    {
    // if(column[j]==0 && check(n,board,row,j))
    if(column[j]==0 && leftdiag[n-1+j-row]==0 && rightdiag[j+row]==0) //optimisation
    {
        column[j]=1;
        board[row][j]='Q';
        leftdiag[j-row+n-1]=1;//left diagonal elems...
        rightdiag[j+row]=1;//opposite hai tab(j=column)+right diagonal elems...

        find(row+1,n,ans,board,column,leftdiag,rightdiag);//Explore!!
        
        //Reset
        column[j]=0;
        board[row][j]='.';
        leftdiag[j-row+n-1]=0;
        rightdiag[j+row]=0;
    }
    }
}


    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        vector<vector<string>>ans;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        board[i].push_back('.');

        vector<bool>column(n,0);
        //optimisation
        vector<bool>leftdiag(2*n-1,0);
        vector<bool>rightdiag(2*n-1,0);

        find(0,n,ans,board,column,leftdiag,rightdiag);
        return ans;
    }
};
