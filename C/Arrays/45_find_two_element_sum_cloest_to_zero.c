#include <stdio.h>
int main(){

    int i,j,len,temp;
    int arr[50];
    int arr1[50];

    printf("Enter the length: ");
    scanf("%d",&len);

    for(i=0;i<len;i++){
        printf("Enter element [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
                if(arr[i]+arr[j]<0){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
    }

    for(i=0;i<len;i++){
        printf("%d ",arr[i]);
    }

return 0;
}