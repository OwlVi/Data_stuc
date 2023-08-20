#include <stdio.h>

int Exercise(int n,int sum){
    if (n <= 1)
    {   
        return sum; 
    }
    else
    {   
        return Exercise((n-1),sum+3); 
    }
}

int main(){
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ",Exercise(i,2));
    }
    

}