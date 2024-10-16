#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int pertence(int num) {
  int num2Antes = 0, num1Antes = 1, numAtual = 0;
  if (num == 0 || num == 1) {
    return 1;
  }
  while (numAtual < num) {
    numAtual = num2Antes + num1Antes;
    num2Antes= num1Antes;
    num1Antes= numAtual;
  }
  return (numAtual == num);
}

int main() {
  int num;
  printf("Informe o número: ");
  scanf("%d", &num);
  if (pertence(num)) {
    printf("%d pertence à sequência de Fibonacci.\n", num);
  } else {
    printf("%d não pertence à sequência de Fibonacci.\n", num);
  }
  return 0;
}
