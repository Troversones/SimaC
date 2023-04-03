#include <stdio.h>
#include <ctype.h>

int main(){
  FILE* f = fopen("uzenet.txt","w");
  char str[500], ch;
  int key = 5;

  printf("Írd be az üzenetet amit szeretnél lekódolni: ");
  scanf("%s", str);
  

  for (int i = 0; str[i] != '\0'; ++i)
  {
    ch = str[i];
    if (isalnum(ch))
    {
      if (islower(ch))
      {
        ch = (ch - 'a' + key) % 26 + 'a';
      }

      if (isupper(ch))
      {
        ch = (ch - 'A' + key) % 26 + 'A';
      }
      
      if (isdigit(ch))
      {
        ch = (ch - '0' + key) % 10 + '0';
      }
    }else{
      printf("Hibás üzenet.");
    }

    str[i] = ch;
  } 
  fprintf(f,"Lekódolt üzenet: %s",str);
  fclose(f);
  return 0;
}