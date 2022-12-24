#include <iostream>
using namespace std;
bool search(int arr[], int s, int e, int k)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
        return true;
    else if (arr[mid] > k)
    {
        return search(arr, s, mid - 1, k);
    }
    else
    {
        return search(arr, mid + 1, e, k);
    }
}
int main()
{
    int arr[] = {1, 13, 45, 56, 3, 0};
    int n = 6;
    if (search(arr, 0, n, 50))
        cout << "Found";
    else
        cout << "not found";

    return 0;
}