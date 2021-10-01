// simple binary search
// time complexity is O(logn) --> worst case || O(1)--> Best case
// auxiliary space --> O(1)
#include <iostream>
#include <algorithm>

using namespace std;
int binarysearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2; // now if low and high are big values they might overflow.
        if (key == a[mid])          // for int only supports 2^31 bytes of memory.
            return mid;             // use int mid = low + (high-low)/2
        else if (key > a[mid])      // assuming high >low
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;

    sort(a, a + n);

    cout << binarysearch(a, n, key);
    return 0;
}