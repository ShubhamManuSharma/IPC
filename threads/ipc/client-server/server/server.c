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

	while(str->flag != 1){
		printf("read data : %s : flag : %d \n",str->data,str->flag);
		i++;
	}
	if(shmdt(str)== -1){
		perror("shmdet error\n");
		exit(EXIT_FAILURE);
	}
return 0;
}
