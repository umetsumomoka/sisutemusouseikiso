#include <stdio.h>

int main(void)
{ 
    int k;
    printf("How old are you?");
    scanf("%d",&k);
    
    int j;
    printf("How old is your borther?");
    scanf("%d",&j);
    
    if (k>20)
    {
        printf("You are adult");
    }
    
    else if (j<20)
    {
        printf("You are child");
        
    }
    
    else
    {
        printf("Yuo are not human");
    }
    
    
    
    return 0;
}