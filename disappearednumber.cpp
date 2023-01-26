#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        ans.push_back(1);
    for (int i = 0; i < nums.size(); i++)
    {
        ans[nums[i] - 1] = 0;
    }
     nums.clear();
    // for (int i = 0; i < ans.size();)
    // {
    //     if (ans[i] == 0)
    //         i++;
    //     else
    //     {
    //         ans.push_back(i);
    //         i++;
    //     }
    // }
    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]!=0)
        nums.push_back(i+1);
    }

    return 0;
}
