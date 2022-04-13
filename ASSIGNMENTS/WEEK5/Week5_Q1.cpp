#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;    
    do{
      int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    arr[i]=arr[i]-'a';
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    int brr[max+1]={0};
    for(int i=0;i<n;i++)
    {
        brr[arr[i]]++;
    }
    max=0;
    for(int i=0;i<n;i++)
    {
        if(max<brr[i])
        max=brr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max==brr[i]&&max!=1)
        printf("%c\n",i+'a');
    }

      t--;  
    }while(t!=0);
    
 return 0;
}
