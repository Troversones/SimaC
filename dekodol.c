#include <stdio.h>
#include <ctype.h>

int main(){
  FILE* f = fopen("uzenet.txt","r");
  char str[500], ch;
  int key = 5;
  fscanf(f,"%s",str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    ch = str[i];
    if (isalnum(ch))
    {
      if (islower(ch))
      {
        ch = (ch - 'a' - key + 26) % 26 + 'a';
      }

      if (isupper(ch))
      {
        ch = (ch - 'A' - key + 26) % 26 + 'A';
      }
      
      if (isdigit(ch))
      {
        ch = (ch - '0' - key + 26) % 10 + '0';
      }
    }else{
      printf("Hibás üzenet.");
    }

    str[i] = ch;
  }
  fclose(f);
  printf("%s\n",str);
  return 0;
}