/* sync by semaphore */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>

/* semaphore attrs */
int semid;
key_t semkey;
struct sembuf *sops;

int a;
void *print(void *arg)
{
	semop(semid,sops,sizeof(struct sembuf));
	int num = *((int *)arg);
	printf("%d : %d : %ld \n",a,num,pthread_self());
	a++;
}

int main()
{
	int i=0;
	pthread_t th_id;

	semkey = ftok("/tmp",'a');
	if(!semkey){
		perror("ftok fails");
		exit(1);
	}
	semid = semget(semkey, 1, IPC_CREAT | IPC_EXCL);
	if(!semid){
		perror("semget fails");
		exit(1);
	}
	sops = malloc(sizeof(struct sembuf));
	if(!sops){
		perror("malloc fails");
		exit(1);
	}	
	while(i<20){
		if(pthread_create(&th_id,NULL,&print,(void*)&i))
			exit(EXIT_FAILURE);
		i++;
	}
	pthread_exit(NULL);
	return 0;
}
