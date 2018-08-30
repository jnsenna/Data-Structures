#include <iostream>

static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();

int dominantIndex(vector<int>& nums) {
    if (nums.size() == 0) {
        return -1;
    }
    
    int max = nums[0];
    int index = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > max) {
            max = nums[i];
            index = i;
        }
    }
    
    for (int i = 0; i < nums.size(); ++i) {
        if (i != index && nums[i] * 2 > max) {
            return -1;
        }
    }
    
    return index;
}

int main() {
    cout << dominantIndex([0, 0, 1, 2]) << endl;
    cout << dominantIndex([0, 0, 1]) << endl;
}