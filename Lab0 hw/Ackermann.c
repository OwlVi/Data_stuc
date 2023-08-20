#include <stdio.h>
#include <stdlib.h>

int Ackermann(int m,int n){
    if (m == 0)
    {
        printf("Ack(%d, %d) ",m,n);
        return n+1;
    }else if (m > 0 && n == 0)
    {
        printf("Ack(%d, %d) ",m,n);
        return Ackermann(m - 1,1);
    }else if (m > 0 && n > 0)
    {
        printf("Ack(%d, %d) ",m,n);
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }

}



int main(){
    printf("\n%d",Ackermann(2,1));
}