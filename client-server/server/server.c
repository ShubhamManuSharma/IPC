#include"header.h"
#include"declaration.h"

int main()
{
	struct stuff req;
	req.a = 15;
	req.b = 25;
	req.flag = 0;
	int shmid;	
	char *data="pehli fursat me nikal";
	char *str;

	shmid = shmget(KEY, 1024 ,0666|IPC_CREAT);
	if(!shmid){
		perror("shmget error\n");
		exit(EXIT_FAILURE);
	}
	while(str == NULL){
		sleep(2);
		str = (char *)shmat(shmid, (void *)0,0);
		if(str == (void *)-1){
			perror("shmget error\n");
			exit(EXIT_FAILURE);
		}
	}
	printf("get data : %s : %ld\n",str,strlen(str));
	shmdt(str);
return 0;
}
