#include <iostream>
#include <ctime>
#include <numeric>

static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); return 0; }();

// method takes O(n^2)
int pivotIndexN2(vector<int>& nums) {
    for (int pivot = 0; pivot < nums.size(); ++pivot) {
        int left_sum = 0;
        int right_sum = 0;
        
        // compute left sum
        for (int i = 0; i < pivot; ++i) {
            left_sum += nums[i];
        }

        // compute right sum
        for (int j = nums.size() - 1; j > pivot; --j) {
            right_sum += nums[j];
        }
        
        // compare left and right sums
        if (left_sum == right_sum) {
            return pivot;
        }
    }

    // if a pivot index was not found, return -1
    return -1;
}

// much more efficient algorithm
int pivotIndex(vector<int>& nums) {
    // base case
    if(nums.size()==0) return -1;
    
    // compute total sum
    int sum = accumulate(nums.begin(), nums.end(), 0);
    
    int left_sum = 0;
    
    // compare left sum with sum not including current index
    for (int i = 0; i < nums.size(); ++i) {
        left_sum = (i == 0)? left_sum : left_sum + nums[i - 1];
        if (sum - nums[i] == 2 * left_sum) return i;
    }
    
    // if pivot not found, return -1
    return -1;
}

int main() {
    int start_s=clock();
    cout << pivotIndexN2([1, 7, 3, 6, 5, 6]) << "\nmethod 1 time to execute: " << (int(clock()) - start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout << pivotIndexN([1, 7, 3, 6, 5, 6]) << "\nmethod 2 time to execute: " << (int(clock()) - start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
}