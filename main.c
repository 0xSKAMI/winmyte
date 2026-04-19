#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  time_t secs = 60;

  time_t startTime = time(NULL);
  while(time(NULL) - startTime < secs) {
    char operations[] = {'+', '-', '*', '/'};
    int first = rand() % (11);
    int second = rand() % (11);
    int operation = rand() % (4);
    int result;
    int answer;


    switch (operation) {
    case 0:
      result = first + second;
      break;
    case 1:
      result = first - second;
      break;
    case 2:
      result = first * second;
      break;
    case 3:
      while(second == 0){
	second = rand() % 11;
      }
      result = first / second;
      break;
    default:
      printf("something went wrong");
      break;
    }

    printf("%d %c %d \n", first, operations[operation], second);  
    printf("type answer to this question \n");
    scanf("%d", &answer);

  }
  return 0;
}
