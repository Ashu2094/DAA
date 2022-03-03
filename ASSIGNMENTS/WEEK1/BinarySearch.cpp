#include <iostream>
#include <stdlib.h>
using namespace std;

void binarySearch(int *ptr, int l, int r, int key)
{
    int mid = l + (r - l) / 2;
    if (r < l)
    {
        cout << "NOt Present" << endl;
        return;
    }
    if (key == ptr[mid])
    {
        cout << "present at"
             << " " << mid << endl;
        return;
    }
    else if (ptr[mid] > key)
        return binarySearch(ptr, l, mid - 1, key);

    else
        return binarySearch(ptr, mid + 1, r, key);
}
int main()
{
    int test;
    cout << "Enter No of Test Cases :=>";
    cin >> test;
    int t = 1;

    while (t <= test)
    {
        int n;
        cout << "Enter Size of Array => ";
        cin >> n;
        int *ptr = new int(n);
        cout << "Enter array => ";
        for (int i = 0; i < n; i++)
            cin >> ptr[i];
        int key;
        cout << "Enter no to be found => ";
        cin >> key;
        cout << endl;
        binarySearch(ptr, 0, n - 1, key);
        delete[] ptr;
        t++;
    }
    return 0;
}
