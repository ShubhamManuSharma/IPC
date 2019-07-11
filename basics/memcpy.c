#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int mymemcpy(char *src, char **dst, int len)
{
	int i;
	char *temp;
	temp = malloc(sizeof(char)*len);
	for(i=0;i<len;i++)
	{
		temp[i]=src[i];
	}
	printf("str2 : %s\n",temp);
	*dst = temp;
}

int main(){
	char str1[]="timesup jhgijajn hasdb sahaw iahek iaiugdjh";
	char *str2;
	mymemcpy(str1,&str2,strlen(str1));
	printf("memcpy : %s\n",str2);
return 0;
}
