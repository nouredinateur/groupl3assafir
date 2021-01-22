#include <stdio.h>


int intToBin(int x);
int binToint();
int  sumbinaire();

int main()
{
	
	binToint();
}

int intToBin(int x)
{
	
}

int  sumbinaire(){
	

}


int binToint(){
   int  num, binary_val, decimal_val = 0, base = 1, rem;

      printf("Insert a binary num (1s and 0s) \n");
      scanf("%d", &num); /* maximum five digits */

      binary_val = num;
      while (num > 0)
      {
          rem = num % 10;
          decimal_val = decimal_val + rem * base;
         //num/=10; 
          num = num / 10 ;
         //base*=2;
          base = base * 2;
      }
     //display binary number
      printf("The Binary num is = %d \n", binary_val);
    //display decimal number   
      printf("Its decimal equivalent is = %d \n", decimal_val);
   return 0;

}

