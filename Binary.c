#include <stdio.h>

int intToBin(int x);
int binToint();
int  sumbinaire();

int main()
{
	
 sumbinaire();
}

int intToBin(int x)
{
	
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
	
	
	
}

