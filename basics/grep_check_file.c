#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <syslog.h>
#include <string.h>

static int check_availabilty(char *ip, u_short port)
{
        FILE *fp;
        char *tmp,*flag = NULL;
	int pos, ret;
        fp = fopen("ip_check.txt","r");
        if(!fp){
                printf("FOPEN FAILURE\n");
                return 0;
        }

	fseek(fp, 0, SEEK_END);
        tmp = (char *)malloc(sizeof(char )*ftell(fp)+1);
	pos = ftell(fp);
	rewind(fp);

	ret = fread((void*)tmp,pos,pos,fp);
	printf("tmp : %s : ret : %d\n",tmp,ret);
	flag = strstr(tmp,ip);
	if(flag != NULL){
		printf("hear 2\n");
		return 1;
	}else{
		printf("hear 3\n");
		return 0;
	}
}


int main(){
	
	u_short proto=123;
	char *ip;

	ip = (char *)malloc(sizeof(char)*50);
	printf("Required ip : %s\n",ip);
	scanf("%s",ip);
	if(check_availabilty(ip,proto)){
		printf("ip found success\n");
	}else
		printf("ip not found \n");
return 0;
}

