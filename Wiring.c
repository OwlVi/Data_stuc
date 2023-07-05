#include <stdio.h>

int main(){
    int n, i,j, num,count = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 0 ; i < n; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    for(i = 0 ; i < n ; i++){
        for (j = i+1; j < n ; j++)
        {   
            if (i == j-1 )
            {   
                // printf("cpr %d : %d\n",arr[i],arr[j]);
                count++;
            }
            else if (arr[i] > arr[j] && arr[i] > arr[i+1])
            {
                // printf("cpr %d : %d\n",arr[i],arr[j]);
                count++;
            }
            else if (arr[i] < arr[j] && arr[i] > arr[i+1])
            {
                // printf("cpr %d : %d\n",arr[i],arr[j]);
                count++;
                break;
            }
        }
    }
    printf("%d\n",count);
}