#include <stdio.h>

void intToBin(int x);
int binToint();
int  sumbinaire();

int main()
{
    
	return 0;
}

void intToBin(int x)
{
    if (x < 0 || x > 15)
    {
        printf("the input should be greater or equal 0 and less than 16\n");
    }
    int bin[4];
    int temp = x;
    for (int i = 0; i < 4; i++)
    {
        bin[i] = temp % 2;
        temp = temp / 2;
    }
    
    printf("%i in binary is: ", x);
    for (int i = 3; i >= 0; i--)
    {
        printf("%i", bin[i]);
    }
    printf("\n");
}



int sumbinaire(int A[4], int B[4], int s[4])
{
    int i;
   
 
    for(i=0; i<4; i++)
    {
    	
        if((A[i] == '0') && (B[i] == '0'))
            s[i] = '0';
        if((A[i] == '0') && (B[i] == '1'))
            s[i] = '0';
        if((A[i] == '1') && (B[i] == '0'))
            s[i] = '0';
        if((A[i] == '1') && (B[i] == '1'))
            s[i] = '1';
    }
     printf("doner\n");
    scanf("%d\n",A);
    printf("doner\n");
    scanf("%d\n",B);
    return s[i];
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

