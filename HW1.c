#include<stdio.h>
int main()
{
char upperCase, lowerCase;
int value;
printf("Enter an alphabet: ");
scanf("%c",&lowerCase);
value = lowerCase;
if(value>= 97 && value<=122)
{
	value =value-32;
	upperCase = value;
	printf("The upper case of the entered letter is %c\n",upperCase);
}
else
{
	printf("You have entered %c which is already in upper case\n",lowerCase);
}
return 0;
}
