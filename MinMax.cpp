#include<iostream>
using namespace std;

int findMin(int arr[], int size){
    int min;
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
    }
    return arr[min];
}

int findMax(int arr[], int size){
    int max;
    for(int i=0;i<size-1;i++)
    {
        max=i;
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[max])
            {
                max=j;
            }
        }
    }
    return arr[max];
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

    int minEle = findMin(arr,size);
    cout<<"Minimum Element is "<<minEle<<endl;
    int maxEle = findMax(arr,size);
    cout<<"Maximum Element is "<<maxEle<<endl;
}