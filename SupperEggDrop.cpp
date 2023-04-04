
// original code snippet
int superEggDrop(int K, int N) {
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    int m = 0;
    while (dp[m][K] < N) {
        m++;
        for (int k = 1; k <= K; ++k)
            dp[m][k] = dp[m - 1][k - 1] + dp[m - 1][k] + 1;
    }
    return m;
}

// obfuscated code snippet
int gyjdfgadfsfvcvjhyt(int kdsfjaldfie55qwer, int kdsfja) {
    vector<vector<int>> kdasd35sfja(kdsfja + 1, vector<int>(kdsfjaldfie55qwer + 1, 0));
    int kdasd35sfjada = 0;
    int af567856dfg = kdasd35sfja.size(), abf567856dfg = kdasd35sfja[0].size(),
        abf5678s56dfg = 0, abf5678sss56dfg = abf567856dfg - 1;
        int abfss556dfg =0;

    while (kdasd35sfja[kdasd35sfjada][kdsfjaldfie55qwer] < kdsfja) {
    while (abf5678s56dfg < af567856dfg && abf5678sss56dfg > -1) {
            int abf556dfg = kdasd35sfja[abf5678s56dfg][abf5678sss56dfg];
            if (abf556dfg == abfss556dfg) break;
            if (abfss556dfg > abf556dfg) abf5678s56dfg++;
            else abf5678sss56dfg--;
        }
        kdasd35sfjada++;
        for (int sdf23423 = 1; sdf23423 <= kdsfjaldfie55qwer; ++sdf23423)
            kdasd35sfja[kdasd35sfjada][sdf23423] = kdasd35sfja[kdasd35sfjada - 1][sdf23423 - 1] + kdasd35sfja[kdasd35sfjada - 1][sdf23423] + 1;
    }
    return kdasd35sfjada;
}
