#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data[1] ,b;
    printf("�п�J�Ʀr:");
    scanf("%d",&b);
    data[1]=b;
    numCount(data);
    return 0;		
}

void numCount(int pon[])
{
	int i;
	for(i=0;i<1;i++)
	{
		if((pon[i]%2)==0)
		printf("�_��%d",pon[1]);
		else
		printf("����%d",pon[1]);
	}
	
}
