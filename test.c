#include <stdio.h>
#include <stdlib.h>

int main(){
  int tomb[13] = {1,2,3,4,5,6,7,8,9,10,11,12,-1};
  int darab = 6;
  int temp = 0, len = 0;
    for (int i = 0; tomb[i] != -1; i++)
    {
        len++;
    }
    if(darab >= len){
        tomb[0] = -1;
    }

    for (int i = 0; i <= len; i++)
    {
        if (tomb[i] == -1)
        {
            tomb[temp] = -1;
        }
        
        if(i >= darab){
            tomb[temp] = tomb[i];
            temp++;
        }
    }
  
    for (int i = 0; tomb[i] != -1; i++)
    {
       printf("%d\n",tomb[i]);    
    }
    return 0;
}