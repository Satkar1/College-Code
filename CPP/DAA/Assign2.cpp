/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No. 2
*/

#include<iostream>
using namespace std;

int quicksort(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<= high-1)
        {
            i++;
        }
        while(arr[j]>=pivot && j>= low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void divide(int arr[],int low,int high)
{
    if(low < high)
    {
        int pivot_index = quicksort(arr,low,high);
        divide(arr,low,pivot_index-1);
        divide(arr,pivot_index+1,high);
    }
}
int main()
{
    int n,x;
    cout<<"Enter size of arr:-";
    cin>>n;
    int arr[n];
    cout<<"Enter arr elemants\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i] = x;
    }
    for (int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    divide(arr,0,n-1);
    cout<<"\nsorted arr is \n";
    for (int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Output:
// Enter size of arr:-10
// Enter arr elemants
// 12
// 4
// 5
// 16

// 2
// 33
// 78
// 95
// 1
// 24
// 12 4 5 16 2 33 78 95 1 24
// sorted arr is
// 1 2 4 5 12 16 24 33 78 95