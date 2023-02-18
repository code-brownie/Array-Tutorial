#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {13, 1012, 25, 36};
    vector<int> ans;
    int n = 4;
    int start =0,end=0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] != 0)
        {
            ans.push_back(arr[i] % 10);
            arr[i] /= 10;
            end++;
        }
        reverse(ans.begin()+start , ans.begin()+end);
        start = end;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] <<',';
    }
    return 0;
}
// output will be like {1,3,1,0,2,5,3,6};