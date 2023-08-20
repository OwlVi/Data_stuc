#include <stdio.h>

struct Nisit {
    char name[100];
    int score;
};

int main() {
    struct Nisit nisit[5];
    int i;
    float avg = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter Name: ");
        scanf("%s", nisit[i].name);

        printf("Enter Score: ");
        scanf("%d", &nisit[i].score);
        printf("\n");
        avg += nisit[i].score;
    }
    
    avg = avg/5;
    printf("Avg: %.2f\n",avg);

    for (i = 0 ; i < 5; i++){
        if(nisit[i].score > avg){
            printf("Name:%s Score:%d\n",nisit[i].name,nisit[i].score);
        }
    }

}
