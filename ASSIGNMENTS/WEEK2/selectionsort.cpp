#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"ENter the numer of elements in array to be inserted=>";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int indexofmin=0;
    for(int i=0;i<n-1;i++)
    {
        indexofmin=i;
        for(int j=1+i;j<n;j++)
        {
            if(arr[j]<arr[indexofmin])
            {
                indexofmin=j;
            }

        }
        int temp=arr[i];
            arr[i]=arr[indexofmin];
            arr[indexofmin]=temp;

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
