#include <stdio.h>

int main() {

int pH;
printf("Enter pH level: ");
scanf("%d", &pH);
if (pH > 14) {
printf("Invalid Input!");
}
else if (pH > 7) {
      if (pH < 12) { 
      printf("Alkaline");
      } 
      else 
      printf("Very Alkalaine");
}
else if (pH == 7) {
      printf("Neutral");
}
else if (pH > 2) {
      printf("Acidic");
}
else 
      printf("Very Acidic");


return 0;
}
