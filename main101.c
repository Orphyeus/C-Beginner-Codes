#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
void loto6_49(int, char);
int main(void) {
  char choice;
  int amount;
  printf("6/49 SAYISAL LOTO (O.G.)\n");
  printf("-------------------\n");
  printf("K - Kolon oyna\n");
  printf("B - Bilet oyna\n");
  printf("Kolon mu, Bilet mi (K/B) ? ");
  scanf(" %c", &choice);
  if(choice == 'K'){
    printf("Kac adet %c oynanacak ", choice);
    scanf("%d", &amount);
  }
  else if(choice == 'B'){
    printf("Kac adet %c oynanacak ", choice);
    scanf("%d", &amount);
    amount *= 2;
  }
  loto6_49(amount, choice);
  return 0;
}
void loto6_49(int amount, char choice){
  int a[N],b[N], x, i, j;
  srand(time(NULL));
  for(i=0; i<N; i++){
    b[i] = rand()%49 + 1;
  }
  for(i=0; i<N; i++){
    x = b[i];
    for(j=0; j<N; j++){
      if(x != b[j])
        a[j] = x;
    
    }
  }
  for(i=0; i<N; i++){
    printf("%d ", a[i]);
  }
}
