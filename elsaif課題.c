#include <stdio.h>

int main(void)
{ 
    int k;
    printf("How old are you?");
    scanf("%d",&k);
    
    int j;
    printf("How old is your borther?");
    scanf("%d",&j);
    
    if (k=20,j<=20)
    {
        printf("You are adult");
    }
    
    else if (j<20)
    {
        printf("You are young brother");
        
    }
    
    else
    {
        printf("You are old brother");
    }
    
    
    
    return 0;
}