/*
假设按照升序排序的数组在预先未知的某个点上进行了旋转。
( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。
搜索一个给定的目标值，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。
你可以假设数组中不存在重复的元素。
你的算法时间复杂度必须是 O(log n) 级别。
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int numTrees(int n){
        int* dp=new int[n+1];
        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<n+1;i++)
            for(int j=1;j<i+1;j++){
                dp[i]+=dp[j-1]*dp[i-j];
            }
        return dp[n];
    };
};
