#include <stdio.h>



int  sumbinaire();

int main(){
	
	
}

int  sumbinaire(int a , int b){
		int s;
		if(a==0 && b==1){
			s=1;
		}else 	if(a==1 && b==0){
			s=1;
		}else 	if(a==0 && b==0){
			s=0;
		}else 	if(a==1 && b==1){
			s=10;
		}
		return s;
	}
