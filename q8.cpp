class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    //   int memo[1001][1001];
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
          vector<vector<int>> memo(x+1,vector<int>(y+1,0));
          for(int i=1;i<=x;i++){
              for(int j=1;j<=y;j++){
                  if(s1[i-1]==s2[j-1]){
                      memo[i][j]= 1+memo[i-1][j-1];
                  }
                  else{
                      memo[i][j]= max(memo[i-1][j],memo[i][j-1]);
                  }
              }
          }
          return memo[x][y];
    }
};
