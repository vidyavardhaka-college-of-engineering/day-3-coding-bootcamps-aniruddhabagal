// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    
    if(number%2 == 0){
      printf("The Given No. is Even\n");
    }
    else 
    printf("The Given No. is Odd\n");
    
   
    return 0;
}
