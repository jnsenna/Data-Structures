#include <iostream>

int removeElement(vector<int>& nums, int val) {
    int next_add = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[next_add] = nums[i];
            ++next_add;
        }
    }
    return k;
}