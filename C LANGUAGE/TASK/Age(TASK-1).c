#include <stdio.h>
int main()
{
	int age;
	printf("enter Miral's age:");
	scanf("%d",&age);
	
	//age of Miral after current year
	printf("\nafter using increment operator age of Miral is:%d",++age);
	
	//age of Miral before current year
	printf("\nafter using decrement operator age of Miral is:%d",--age,--age);
	return 0;
}