#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter limit=>";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int t=arr[i];
       int j=i-1;
        while(j>=0&&arr[j]>t)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
