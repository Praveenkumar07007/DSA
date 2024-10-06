#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int>& arr, int target) {
    int lo = 0;
    int hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {35, 2, 24, 632, 42, 64, 72, 32, 67};
    sort(arr.begin(), arr.end());

    int ans = search(arr, 32);//output will be 2 bcoz after sorting 32 is at 2nd index
    cout << ans << endl;
}
