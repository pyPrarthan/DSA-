//LeetCode

//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        
        int maxSub = nums[0];
        int curSub = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (curSub < 0)
            {
                curSub = 0;
            }
            curSub += nums[i];
            maxSub = max(maxSub, curSub);
        }
        return maxSub;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums2 = {1};
    vector<int> nums3 = {5, 4, -1, 7, 8};

    cout << "Output for nums1: " << sol.maxSubArray(nums1) << endl;
    cout << "Output for nums2: " << sol.maxSubArray(nums2) << endl;
    cout << "Output for nums3: " << sol.maxSubArray(nums3) << endl;

    return 0;
}
