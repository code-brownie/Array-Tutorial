#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = 7;

    for (int i = 0; i < n - 1; i++)
    {
        if (i & 1)
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        else if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<' ';
}

    return 0;
}