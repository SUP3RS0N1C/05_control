#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	
	printf("정수 하나를 입력하시오 :");
	scanf("%d", &input);
	
	if(input>0)
	{	printf("양수입니다.");
	 } 
	if (input==0)
	{	printf("0입니다.");
	}
	else
	{	printf("음수입니다");
	 } 
	 
	return 0;
}
