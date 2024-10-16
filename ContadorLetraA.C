#include <stdio.h>
#include <string.h>

int main() {
  char palavra[30];
  int cont = 0;
  scanf("%s", palavra);
  for (int i = 0; i < strlen(palavra); i++){
    if (palavra[i] == 'A' || palavra[i] == 'a') {
      cont++;
    }
  }
  if (cont == 0) {
    printf("A letra 'a' seja ela maiúscula ou minúscula não aparece na palavra %s", palavra);
  } else {
    printf("A letra 'a' seja ela maiúscula ou minúscula aparece na palavra %s %d vezes", palavra, cont);
  }
  return 0;
}
