#include <stdio.h>
#include <stdlib.h>
int step(int a, int b){
  int rez = 1;
  for(int i = 0; i < b; i++){
    rez *= a;
  }
  return rez;
}
int SecondInToTen(char *number){
  int length = 0;
  //printf("Function in %s", number);
  int rez = 0;
  char per1[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int i = 0; *(number+i) != '\0'; i++){
    length++;
  }//находим максимальную разрядность числа
  //printf("Length = %i\n", length); Ok
  for(int i = length; i > 0; i--){
    int helper = -1;
    for(int j = 0; j < 10; j++){//переводим в int
      if (*(number + i-1) == per1[j]){
        helper = j;
        //printf("Number = %c Helper = %i\n", *(number+i-1), helper);
      }
      //printf("Number = %c\n", *(number+i-1));
    }
    rez += step(2 * helper, i-1);
    //printf("Step = %i\n", step(2 * helper, i-1));
  }

  return rez;
}

int main(){
  char string[] = "111111\0";
  int num = SecondInToTen(string);
  printf("Hello there! string = %s int = %i\n", string, num);
  return 0;
}
