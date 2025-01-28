#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence=(rand()%20)+1;
    
    printf("intelligence=%d ",intelligence);
    
    srand(time(0));
    
    int stamina=(rand()%(20-intelligence))+1;
    
    printf("stamina=%d ",stamina);
    
    int a,b,charisma;
    
    a=intelligence;
    b=stamina;
    charisma=20-(a+b);
    
    printf("charisma=%d",charisma);
    
    int mage,knight,thief;
    
    mage=intelligence;
    knight=stamina;
    thief=charisma;
    
    if(mage>(knight,thief))
      printf("   mage");
      
    else if(knight>(mage,thief))
      printf("   knight");
      
    else if(thief>(mage,knight))
      printf("   thief");
      
      
      
    else if((knight==mage)>thief)
      printf("   gifted");

    else if((knight==thief)>mage)
      printf("   gifted");
      
    else
      printf("   gifted");
      
    return 0;
}