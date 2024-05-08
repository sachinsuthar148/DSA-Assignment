#include<iostream>

void sorting(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

using namespace std;
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

    cout << "Array before sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    sorting(arr,size);



    cout << "\nArray after sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }


}