class Solution {
public:
int m,n;
// vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
int dr[4]={-1,1,0,0};
int dc[4]={0,0,-1,1};
bool find(vector<vector<char>>& board,string& word,int i,int j,int index)
{
    if(index==word.size()) return 1;

    if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$')
    return 0;

    if(board[i][j]!=word[index]) return 0;

    char temp =board[i][j];
    board[i][j]='$';//mark visited using dollar sign!!
    for(int k=0;k<4;k++)
    {
        // int new_i=i+directions[k][0];
        // int new_j=j+directions[k][1];

        int new_i=i+dr[k];
        int new_j=j+dc[k];

        if(find(board,word,new_i,new_j,index+1))
        return true;
    }

    board[i][j]=temp;//reset 

    return false;
}

    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();//rows
        n=board[0].size();//cols

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0] && find(board,word,i,j,0))
                return true;
            }
        }
        return false;

    }
};
