#include <iostream>
#include <vector>

class Solution
{
public:
    int search(std::vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[low] <= nums[mid])
            {
                if (nums[low] <= target && target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (nums[mid] < target && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;

    std::vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    std::cout << "Test Case 1: " << sol.search(nums1, target1) << std::endl;

    std::vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    std::cout << "Test Case 2: " << sol.search(nums2, target2) << std::endl;

    std::vector<int> nums3 = {1};
    int target3 = 0;
    std::cout << "Test Case 3: " << sol.search(nums3, target3) << std::endl;

    return 0;
}
