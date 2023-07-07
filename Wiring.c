#include <stdio.h>

int main(){
    int n,i,j,temp;
    scanf("%d", &n);

    int arr[n];
    int count = n-1;

    for (i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0 ; i < n-2; i++){
        temp = 0;
        for (j = i+2; j < n; j++)
        {   
            if (arr[j-1] > temp){
                temp = arr[j-1];
                // printf("%d ",temp);
            }
            if (arr[i] > arr[j-1] && arr[j] > arr[j-1]){
                // printf(" %d | %d\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("%d",count);
}