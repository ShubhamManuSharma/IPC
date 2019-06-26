#include"header.h"
#include"declaration.h"

int main()
{
	struct stuff *req,*str;
	int shmid, i=0;	

	shmid = shmget(KEY, 1024, 0666|IPC_CREAT);
	if(!shmid){
		perror("shmget error\n");
		exit(EXIT_FAILURE);
	}

	str = (struct stuff *)shmat(shmid, (void *)0,0);
	if( str == (void *)-1 ){
		perror("shmat error\n");
		exit(EXIT_FAILURE);
	}

	while(i<4 ){
		printf("Msz : ");
		fgets(str->data,BUFSIZE,stdin);
		str->flag = 0;
		printf("writed data : %s : %ld\n",str->data,strlen(str->data));
		i++;
	}
	str->flag = 1;
	if(shmdt(str)== -1){
		perror("shmdet error\n");
		exit(EXIT_FAILURE);
	}

	if(shmctl(shmid, IPC_RMID, NULL)==-1){
		perror("shmclt error\n");
		exit(EXIT_FAILURE);
	}
return 0;
}
