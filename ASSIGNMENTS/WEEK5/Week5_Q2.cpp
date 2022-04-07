#include<bits/stdc++.h>
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
int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
   
        int t;
        cin>>t;
        
        do
        {
            int n;  cin>>n;  int arr[n];
        for(int i=0;i<n;i++)  cin>>arr[i];
        int key;  cin>>key;
        mergesort(arr,0,n-1);
        
        cout<<endl;
        int result=-1;
        int search;
          for(int i=0;i<n;i++)
        {
            search=key-arr[i];
            result = binarySearch(arr, search, 0, n - 1);
            if(arr[result]==search)
            {
                cout<< arr[i]<<" "<<arr[result];
            break;
            }
            
        }
        if(result==-1)
        cout<<"Not Found";  
        }while(t!=0);


        
 return 0;
}
