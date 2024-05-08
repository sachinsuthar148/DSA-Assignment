#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
    int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key <= arr[mid])
        {
            end = mid - 1;
        }
        else if (key >= arr[mid])
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int size, key;
    cout << "Enter the size of array :";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be search in Array :";
    cin >> key;

    int output=BinarySearch(arr, size, key);
    if(output == -1)
    {
            cout<<"Element not found in array "<<endl;
    }
    else{
            cout<<"Element found in array at position "<<output+1<<endl;
    }
}