#include <stdio.h>
#include <stdlib.h>
int step(int a, int b){
  int rez = 0;
  //to do
  return rez;
}
int SecondInToTen(char *number){
  int length = 0;
  int rez = 0;
  char per1[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int i = 0; *(number+i) != '\0'; i++){
    length++;
  }//находим максимальную разрядность числа
  for(int i = length; i > 0; i--){
    int helper = -1;//переводим в int
    for(int j = 0; j < 10; j++){
      if (*(number + i) == per1[j])
        helper = j;
    }
    rez += step(2 * helper, i-1);
  }
  return rez;
}

int main(){

  printf("Hello there!");
  return 0;
}
