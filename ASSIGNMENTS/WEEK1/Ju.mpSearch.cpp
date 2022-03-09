#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;     cout<<"Enter limit=>";   cin>>n;
    int arr[n];    cout<<"Enter array =>";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int m=sqrt(n);
    cout<<"enter key=>";    int key;    cin>>key;
    int flag=0;
    int prev=m;
    do{
        if(key>arr[m])
        m=m+sqrt(n);
        else
        {
            prev=m-sqrt(n);
            while(prev<=m)
            {
                if(arr[prev]==key)
                {
                    cout<<key<<" is found at "<<prev<<" index";
                    flag=1;
                    exit(0);
                }
                else
                prev++;
            }
        }
    }while(m<n&&flag==0);
    cout<<key<<" is not found";
    return 0;
}
