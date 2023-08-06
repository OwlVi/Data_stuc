#include <stdio.h>
#include <stdlib.h>

void pop(int *arry, int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arry[i] != 0) {
            arry[i] = 0;
            break;
        }
    }
}

void count(int arry[], int size) {
    int temp = 0;
    for (int i = 0; i < size; i++) {
        if (arry[i]) {
            temp++;
        }
    }
    printf("%d\n", temp);
}

int check(int arry[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (arry[i] != 0) {
            return arry[i];
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int *array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        array[i] = 0;
    }

    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 1) {
            scanf("%d", &array[i]);
        } else if (num == 2) {
            pop(array, n);
        } else if (num == 3) {
            int result = check(array, n);
            if (result) {
                printf("%d\n", result);
            } else {
                printf("EMPTY\n");
            }
        } else if (num == 4) {
            count(array, n);
        }
    }

    free(array); 
    return 0;
}
