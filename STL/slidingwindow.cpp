#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> slidingWindowMaximum(vector<int>& nums, int k) {
    vector<int> result;   // Stores the maximum of each window
    deque<int> dq;        // Stores indices of array elements, used to find the maximum

    for (int i = 0; i < nums.size(); i++) {
        // Remove indices that are out of the current window
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        // Remove indices of all elements smaller than the current element
        // (since they will not be the maximum)
        while (!dq.empty() && nums[dq.back()] <= nums[i])
            dq.pop_back();

        // Add the current element's index to the deque
        dq.push_back(i);

        // Add the maximum for the current window to the result
        // (only when we've processed at least k elements)
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = slidingWindowMaximum(nums, k);

    cout << "Sliding Window Maximums: ";
    for (int maxVal : result) {
        cout << maxVal << " ";
    }

    return 0;
}
