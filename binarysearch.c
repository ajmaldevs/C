#include <stdio.h>
int binary( int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
    }
}
int main(){
    int n,arr[100],target;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter Array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter Target element: ");
    scanf("%d",&target);
    int res=binary(arr,n,target);
    printf("Element found at %d",res);
    return 0;
}