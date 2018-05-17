#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data[1] ,b; //跑计 
    printf("叫块计:");
    scanf("%d",&b);  //眔跑计b 
    data[1]=b;    //盢跑计皚 
    numCount(data); //捌祘Α 
    return 0;		
}

void numCount(int pon[])//耞跑计b琌计or案计b捌祘Α 
{
	int i;
	for(i=0;i<1;i++)    
	{
		if((pon[i]%2)==0)
		printf("计%d",pon[1]);
		else
		printf("案计%d",pon[1]);
	}
	
}
