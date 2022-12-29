#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int l = 0;
    int e = nums.size() - 1;
    while (l <= e)
    {
        int mid = l + (e - l) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            l = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}
int searchInsert(vector<int> &nums, int target)
{
    int ans = search(nums, target);
    if (ans != -1)
    {
        return ans;
    }
    vector<int> temp;
    temp = nums;
    temp.push_back(target);
    sort(temp.begin(), temp.end());
    int res = search(temp, target);

    return res;
}
int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    int ans = searchInsert(nums, target);
    cout << ans;
    return 0;
}