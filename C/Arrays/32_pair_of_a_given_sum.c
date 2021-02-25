#include <stdio.h>
int Array_printf(int arr[],int l);

int Array_printf(int arr[],int l){
    
    int i,sum,j,count=0;
    printf("\nEnter the length of array: ");
    scanf("%d",&l);
    printf("Enter element of length [%d]: ",l);
    for(i=0;i<l;i++){
        count = count+1;
        scanf("%d",&arr[i]);
    }
    for(i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
    
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
            if(arr[i]+arr[j]==l){
                printf("\n%d %d",i,j);
            }
        }
    }
    
}
int main(){

    int arr[50];
    int len;

    Array_printf(arr,len);
    
return 0;
}