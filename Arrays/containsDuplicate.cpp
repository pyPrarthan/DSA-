// LEETCODE

// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.
#include <iostream>
#include <unordered_map>
#include <vector>

    bool
    containsDuplicate(std::vector<int> &nums)
{
    std::unordered_map<int, int> frequencyMap;
    for (int i = 0; i < nums.size(); i++){
        {
            if (frequencyMap.find(nums[i]) != frequencyMap.end()){
                return true;
            }
            else
            {
                frequencyMap[nums[i]] = 1;
            }
        }
        return false;
    }
}

int main(){
    std::vector<int> v = {1, 2, 3, 1};
    bool hasDuplicates = containsDuplicate(v);
    std::cout << std::boolalpha << hasDuplicates << std::endl;

    return 0;
}
