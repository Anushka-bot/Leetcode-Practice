#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int srt, int mid, int end)
{
    int n1 = mid - srt + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[srt + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    int l = 0, r = 0, k = srt;
    while (l < n1 && r < n2)
    {
        if (L[l] <= R[r])
        {
            arr[k] = L[l];
            k++;
            l++;
        }
        else if (L[l] > R[r])
        {
            arr[k] = R[r];
            k++, r++;
        }
    }

    while (l < n1)
    {
        arr[k] = L[l];
        l++, k++;
    }
    while (r < n2)
    {
        arr[k] = R[r];
        k++, r++;
    }
}
void mergesort(int arr[], int size_arr, int srt, int end)
{
    int mid;
    if (srt < end)
    {
        mid = (srt + end) / 2;
        mergesort(arr, size_arr, srt, mid);
        mergesort(arr, size_arr, mid + 1, end);
        merge(arr, srt, mid, end);
    }
}
int main()
{
    int ele = 0;
    cout << "enter number of elements for array: ";
    cin >> ele;
    int arr[ele];
    for (int i = 0; i < ele; i++)
    {
        cin >> arr[i];
    }
    int srt = 0, end = ele - 1;
    mergesort(arr, ele, srt, end);
    for (int i = 0; i < ele; i++)
    {
        cout << arr[i] << " ";
    }
}

//TC === nlogn