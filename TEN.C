#include <stdio.h>
  int main() {
    int a[10];
    int j;
    int greatest;
    printf("Enter ten values:");
    //Store 10 numbers in an array
    for (j = 0; j < 10; j++) {
    scanf("%d", &a[j]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (j = 0; j < 10; j++) {
if (a[j] > greatest) {
greatest = a[j];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
