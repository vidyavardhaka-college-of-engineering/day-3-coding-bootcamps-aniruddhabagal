//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n;

  	scanf("%d", &n);

  	//Write your code here

    for(int i=0; i<n; i++){

      for(int k=0; k<i; k++){

          printf(" * ");
          
      }
      printf("\n");
    }
  	

  	return 0;
}
