#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int srt, int end)
{
    int pivot = arr[end];
    cout << pivot;
    int i = srt - 1;
    int j = srt;
    for (j = srt; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
    swap(arr[i + 1], pivot);
    return i + 1;
}
void quicksort(int arr[], int srt, int end)

{
    int pivot = partition(arr, srt, end);
    if (pivot <= srt + 1)
    {
        quicksort(arr, pivot + 1, end);
    }
    else if (pivot >= end - 1)
    {
        quicksort(arr, srt, pivot - 1);
    }
    else{
        quicksort(arr, pivot + 1, end);
        quicksort(arr, srt, pivot - 1);
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
    quicksort(arr, 0, ele - 1);
    for (int i = 0; i < ele; i++)
    {
        cout << arr[i] << " ";
    }
}