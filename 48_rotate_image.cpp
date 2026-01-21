class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    //    int n=matrix.size();
    //    for(int i=0;i<n-1;i++)
    //    {//transpose
    //     for(int j=i+1;j<n;j++)
    //     swap(matrix[i][j],matrix[j][i]);
    //    }
    //    //reverse row(Row constant)
    //    for(int i=0;i<n;i++)
    //    {
    //    int start=0,end=n-1;
    //    while(start<end)
    //    {
    //     swap(matrix[i][start],matrix[i][end]);
    //     start++,end--;
    //    }
    // }
    //
    //M1
    // int n=matrix.size();
    // // int m=matrix[0].size();
    // vector<vector<int>>rotated(n,vector<int>(n));

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //      rotated[j][n-i-1]=matrix[i][j];
    //     }
    // }
    // return rotated;
    // }
    //m2
    int n=matrix.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);//transpose!!
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     reverse(matrix[i].begin(),matrix[i].end());
    // }
    for(int i=0;i<n;i++)
    {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }

    }
    }
};