#include <stdio.h>

int main(){
    int min = 0 , max = 0, n, i, num,temp = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 0 ; i < n; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    for ( i = 0; i < n; i++)
    { 
        //sort array
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp    =   arr[i];
                arr[i]  =   arr[j];
                arr[j]  =   temp;
            }
        }
    }
    min =   arr[0];
    max =   arr[n-1];

    printf("\n%d\n%d", min,max);


    
}