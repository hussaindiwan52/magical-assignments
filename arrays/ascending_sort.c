#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element in first array :- ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
