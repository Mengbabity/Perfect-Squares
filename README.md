# Perfect-Squares

计算一个数最少需要几个n平方（1，4，9...）这样的数组成。

利用动态规划思想，每个数的结果为min(cmp,tmp[sum - i * i]+1)，加一的原因是家属之一可以为i * i。用到了static vector<int>来存储每个数的结果，目的是提高性能。
