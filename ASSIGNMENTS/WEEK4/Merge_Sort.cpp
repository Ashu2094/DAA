#include<iostream>
using namespace std;

void merge(int arr[],int mid,int low, int high )
{
    int i=low,j=mid+1,k=low;
    int brr[high];
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        {
            brr[k]=arr[i];
            i++;
        }
        else
        {
            brr[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        brr[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        brr[k]=arr[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++)
        arr[i]=brr[i];
}

void mergesort(int arr[],int low,int high)
{
    int mid=0;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main()
{
    int n;
    cout<<"Enter Limit=> ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements => ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"After Merge Sort=> ";
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 return 0;
}
