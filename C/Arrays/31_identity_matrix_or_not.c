#include <stdio.h>
int main(){

    int r,c,i,j,yn=1;
    int arr[50][50];
    
    printf("Enter 1st Matrix: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nFirst Array\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]!=1 && arr[i][j]!=0)
            yn=0;
            break;  
        }
    }
    if(yn==1){
        printf("\nThe matrix is identical");
    }else{
        printf("\nThe matrix is not Identical");
    }
    
return 0;
}