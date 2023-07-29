#include <stdio.h>

int Exercise(int n){
    if (n == 1)
    {   
        return n + 1; 
    }
    else
    {   
        return Exercise(n-1)+3; 
    }
}

int main(){
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ",Exercise(i));
    }
    

}