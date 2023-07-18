#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> record;
        for (int i = 0; i < nums.size(); i++) {
            auto iter = record.find(target - nums[i]);
            if (iter != record.end())
                return {iter->second, i};
            record[nums[i]] = i;
        }
        return {};
    }
};

template<typename T>
void printVector(vector<T>& vec) {
    for (const T& c : vec) {
        std::cout << c << ", ";
    }
    std::cout << std::endl;
}

int main() {

    std::vector<int> nums = {2, 23, 7 ,5};
    int target = 9;

    auto res = Solution::twoSum(nums, target);

    printVector(res);
}