#include <stdio.h>

int main() {

  // variable to store the given number
  int n;

  //take input from the user
  scanf("%d", &n);

  //if else condition to check whether the number is even or odd
  if (n % 2 == 0) {

    //the number is even
    printf("Even ");

    //nested if else condition to check if n is divisible by 4 or not
    if (n % 4 == 0) {
      //the number is divisible by 4
      printf("and divisible by 4");
    } else {
      //the number is not divisible by 4
      printf("and not divisible by 4");
    }
  } else {
    //the number is odd
    printf("Odd ");

    //nested if else condition to check if n is divisible by 3 or not
    if (n % 3 == 0) {
      //the number is divisible by 3
      printf("and divisible by 3");
    } else {
      //the number is not divisible by 3
      printf("and not divisible by 3");
    }

  }

  return 0;
 
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
