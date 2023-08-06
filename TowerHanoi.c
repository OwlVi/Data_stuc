#include <stdio.h>

void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    int arryTowerA[n];
    int arryTowerB[n];
    int arryTowerC[n];
    
    if (n == 1) {
        printf("Tower A: ");
        for (int i = 0; i < n; i++)
        {
           printf("%d ",arryTowerA[i]);
        }
        printf("\n");
        printf("Tower B: ");

        for (int i = 0; i < n; i++)
        {
           printf("%d ",arryTowerA[i]);
        }
        printf("\n");
        printf("Tower C: ");
        for (int i = 0; i < n; i++)
        {
           printf("%d ",arryTowerA[i]);
        }
        printf("\n");
        return;
    }


}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
    

    printf("Start\n");
    towerOfHanoi(n,)

    return 0;
}
