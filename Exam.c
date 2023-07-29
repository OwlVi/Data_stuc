#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


typedef struct Score
{
    int subject_pass;
    int subject_a ;
    int subject_b ;
    int subject_c ;
    int avg_score ;

}Nisit;



int main(){
    int n;
    
    scanf("%d",&n);

    Nisit nisit[n];
    
    float avg_a = 0,avg_b = 0,avg_c = 0,avg_abc = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&nisit[i].subject_a,&nisit[i].subject_b,&nisit[i].subject_c);
        nisit[i].subject_pass = 0;
    }
    
    for (int i = 0; i < n; i++)
    {   nisit[i].avg_score = nisit[i].subject_a + nisit[i].subject_b + nisit[i].subject_c;
        avg_a += nisit[i].subject_a;
        avg_b += nisit[i].subject_b;
        avg_c += nisit[i].subject_c;

    }
    
    avg_abc = (avg_a/3) + (avg_b/3) + (avg_c/3);

    // printf(" [%d %d %d] %d\n",(int)ceil(avg_a/n),(int)ceil(avg_b/n),(int)ceil(avg_c/n),(int)ceil(avg_abc/n));
 
    for (int i = 0; i < n; i++)
    {
        // printf("%d\n",nisit[i].avg_score/3);
        if(nisit[i].subject_a >= avg_a/n){
            nisit[i].subject_pass++;
        }
        if (nisit[i].subject_b >= avg_b/n)
        {
            nisit[i].subject_pass++;
        }
        if (nisit[i].subject_c >= avg_c/n)
        {
            nisit[i].subject_pass++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {   
        // printf("%d ",nisit[i].subject_pass);
        if (nisit[i].subject_pass >= 2 && (nisit[i].subject_a != 0) && (nisit[i].subject_b != 0) && (nisit[i].subject_c != 0))
        {
            if ((nisit[i].avg_score/3) >= (avg_abc/n))
            {
                printf("%d ",i+1);
            }
            
        }
    }

}