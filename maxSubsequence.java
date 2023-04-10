
// original code snippet
public int[] maxSubsequence(int[] nums, int k) {
    int n = nums.length;
    int[][] indexAndVal = new int[n][2];
    for (int i = 0; i < n; ++i) {
        indexAndVal[i] = new int[]{i, nums[i]};
    }
    Arrays.sort(indexAndVal, Comparator.comparingInt(a -> -a[1]));
    int[][] maxK = Arrays.copyOf(indexAndVal, k);
    Arrays.sort(maxK, Comparator.comparingInt(a -> a[0]));
    int[] seq = new int[k];
    for (int i = 0; i < k; ++i) {
        seq[i] = maxK[i][1];
    }
    return seq;
}

// obfuscated code snippet
 
public int[] adfasdf(int[] er34523sdf, int er34sadf523sdf) {
    int esdad23fssfdf = er34523sdf.length;
    int[][] esdadfssf = new int[esdad23fssfdf][2];
    for (int esda234sfdf = 0; esda234sfdf < esdad23fssfdf; ++esda234sfdf) {
        esdadfssf[esda234sfdf] = new int[]{esda234sfdf, er34523sdf[esda234sfdf]};
    }

    Arrays.sort(esdadfssf, Comparator.comparingInt(a -> -a[1]));
    int[][] er34ssdadf523sdf = Arrays.copyOf(esdadfssf, er34sadf523sdf);

    Arrays.sort(er34ssdadf523sdf, Comparator.comparingInt(a -> a[0]));
    int[] esda23ad4sfdf = new int[er34sadf523sdf];
    for (int esda234sfdf = 0; esda234sfdf < er34sadf523sdf; ++esda234sfdf) {
        esda23ad4sfdf[esda234sfdf] = er34ssdadf523sdf[esda234sfdf][1];
    }
    return esda23ad4sfdf;
}
