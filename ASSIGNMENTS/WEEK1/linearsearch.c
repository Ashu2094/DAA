#include <stdio.h>

int main()
{
    int test;
    printf("Input Number of Test Cases:=>");
    scanf("%d",&test);
    int t=0;
    while(t<test)
    {
        int n;
    printf("Input Size of array:=>");
    scanf("%d",&n);
    int arr[n];
    printf("Input array:=>");
    
    
    int i=0;
    for(int j=0;j<n;j++)
    scanf("%d",&arr[j]);

    int key;
    printf("Input key:=>");
    scanf("%d",&key);
    int flag=0;
    while(i<n)
    {
        
        if(arr[i]==key)
        {
            printf("%d found \n",key);
            printf("Number of Comparisions => %d\n",i+1);
            flag=1;
            break;
        }
        
        i++;
    }
    if(flag==0)
    printf("key not found\n");
    t++;
    }

}
