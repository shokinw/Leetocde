class Solution {
public: 
    int dp[1001][1001];
      int lcs(string & a, string & b , int n, int m){
        if(n==0 or m==0) return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(a[n-1]==b[m-1]) return dp[n][m] = 1+ lcs(a,b,n-1,m-1);
        return dp[n][m]= max(lcs(a,b,n-1,m),lcs(a,b,n,m-1));  
      }
    int longestCommonSubsequence(string text1, string text2) {
         memset(dp,-1,sizeof(dp));
         return lcs(text1, text2, text1.size(), text2.size());
    }
};