#include <stdio.h>
int main()
{
int m,p,c;
printf("Enter the marks  obtained in p, c, m : ");
scanf("%d%d%d",&p&c&m);
int total = p+c+m;
int totalmp = m+p;

if (m>= 65 && p>=65 && c>=50 && total >=190 || totalmp>=140){
	printf("eligible\n");
}
else{
	printf("not eligible");
}
return 0;

}
