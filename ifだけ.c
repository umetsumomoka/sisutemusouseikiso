#include <stdio.h>

int main(void)
{
    int chocolate,snack,candy;
    
    chocolate = 5;//チョコレートの数
    snack = 10;//スナック菓子の数
    candy = 15;//飴の数
    
    //変数との比較
    if(chocolate==5)
       printf("チョコレートの数は5個です\n");
    if(snack!=7)
      printf("スナック菓子の数は７個ではありません\n");
    if(candy>=10)
      printf("飴の数は１０個以上です\n");
    if(snack<=13)
      printf("スナック菓子の数は１３個以下です\n");
      
    //変数と変数の比較
    if(chocolate<snack)
      printf("チョコレートの数はスナック菓子の数より少ないです\n");
    if(candy>snack)
      printf("飴の数はスナック菓子の数より多いです\n");
      
    return 0;
}