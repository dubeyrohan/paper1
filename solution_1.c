#include <stdio.h>

void solve()
{
    int arr[]={12,13,1,10,34,1};
    int index1,index2,min=1e9;
    
    for(int i=0;i<6;i++)
        if(arr[i]<min)  
            min=arr[i],index1=i;
    
    min=1e9;
    for(int i=0;i<6;i++)
        if(arr[i]!=arr[index1] && arr[i]<min)
            min=arr[i],index2=i;
            
    printf("Smallest element is %d\nsecond Smallest element is %d",arr[index1],arr[index2]);
}
int main()
{
    int test_cases = 1;
    //cin >> test_cases;
    for (int t = 1; t <= test_cases; t++)
        solve();
    return 0;
}
