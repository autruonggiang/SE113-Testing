#include <stdio.h>

int main(void){
  int side[3], i, j, tmp, max_p;

  printf("Input three sides:\n> ");
  scanf("%d %d %d", &side[0], &side[1], &side[2]);

  /* sort three sides in descending order */
  for ( i = 0; i < 3; i++ ){
    max_p = i;
    for ( j = i+1; j < 3; j++ ){
      if ( side[max_p] < side[j] ){
        max_p = j;
      }
    }
    tmp = side[max_p];
    side[max_p] = side[i];
    side[i] = tmp;
  }

  printf("\n");
  printf("three sides =");
  for ( i = 0; i < 3; i++ ){
    printf(" %d", side[i]);
  }
  printf("\n");


  printf(" ===> ");
  /* TODO: output the corresponding triangle type */
  printf("equilateral triangle\n");
  printf("isosceles triangle\n");
  printf("scalene triangle\n");
  printf("[ERROR] not a triangle\n");

  return 0;
}
