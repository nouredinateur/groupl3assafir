#include <stdio.h>

void intToBin(int x);
int binToint();
int  sumbinaire();

int main()
{
	
	
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
    
    for (int i = 3; i >= 0; i--)
    {
        printf("%i", bin[i]);
    }
    printf("\n");
}

int  sumbinaire(){
	

}


int binToint(){
	
	
	
}

