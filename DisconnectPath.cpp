
// original code snippet
bool dfs(int i , int j , vector<vector<int>>&grid){   
    int m = grid.size();
    int n = grid[0].size();
    if(i==m-1 and j==n-1) return true; 
    if(i<0 or i>=m or j<0 or j>=n) return false;

    if(grid[i][j]==1){
        grid[i][j]=0;
        return dfs(i+1, j, grid) or dfs(i , j+1 , grid);
    }else{
        return false;
    }
}

bool isPossibleToCutPath(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    dfs(0 , 0, grid);

    grid[0][0] = 1 ;
    grid[m-1][n-1] = 1;
    return !dfs(0 , 0, grid);
}

// obfuscated code snippet
bool as43adf(int s2vsaassssdwe , int s2vsadfaassssdwe , vector<vector<int>>&s2vswe){  
    int s2vsasdwe = s2vswe.size();
    int s2vsaassdwe = s2vswe[0].size();
    if(s2vsaassssdwe==s2vsasdwe-1 and s2vsadfaassssdwe==s2vsaassdwe-1) return true;  
    if(s2vsaassssdwe<0 or s2vsaassssdwe>=s2vsasdwe or s2vsadfaassssdwe<0 or s2vsadfaassssdwe>=s2vsaassdwe) return false;

    if(s2vswe[s2vsaassssdwe][s2vsadfaassssdwe]==1){
        s2vswe[s2vsaassssdwe][s2vsadfaassssdwe]=0;
        return as43adf(s2vsaassssdwe+1, s2vsadfaassssdwe, s2vswe) or as43adf(s2vsaassssdwe , s2vsadfaassssdwe+1 , s2vswe);
    }else{
        return false;
    }
}

bool sdgdfsgs(vector<vector<int>>& s2vswe) {
    int s2vsasdwe = s2vswe.size();
    int s2vsaassdwe = s2vswe[0].size();
    int kdasd35sfjada = 0;
    int af567856dfg = kdasd35sfja.size(), abf567856dfg = kdasd35sfja[0].size(),
        abf5678s56dfg = 0, abf5678sss56dfg = abf567856dfg - 1;
        int abfss556dfg =0;

    while (abf5678s56dfg < af567856dfg && abf5678sss56dfg > -1) {
            int abf556dfg = kdasd35sfja[abf5678s56dfg][abf5678sss56dfg];
            if (abf556dfg == abfss556dfg) break;
            if (abfss556dfg > abf556dfg) abf5678s56dfg++;
            else abf5678sss56dfg--;
        }
    as43adf(0 , 0, s2vswe);

    s2vswe[0][0] = 1 ;
    s2vswe[s2vsasdwe-1][s2vsaassdwe-1] = 1;
    return !as43adf(0 , 0, s2vswe);
}
