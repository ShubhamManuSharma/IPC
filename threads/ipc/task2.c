/* sync by semaphore */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <semaphore.h>

/* semaphore attrs */
int semid;
key_t semkey;
sem_t semname;

struct sembuf *sops;
int a=0;
void *print(void *arg)
{
	int num = *((int *)arg);
	sem_wait(&semname);
	printf("%d : %d : %ld \n",a,num,pthread_self());
	a++;
	sem_post(&semname);
}

int main()
{
	int val;
	int i=0;
	pthread_t th_id;
	
	printf("Initial %d \n",a);

	semkey = ftok("/tmp",'a');
	if(!semkey){
		perror("ftok fails");
		exit(1);
	}
	if(sem_init(&semname, 0, 1)<0)
	{
		perror("semget fails");
		exit(1);
	}
	while(i<10){
		if(pthread_create(&th_id,NULL,&print,(void*)&a))
			exit(EXIT_FAILURE);
		i++;
	}
	
	printf("Final %d \n",a);
	pthread_exit(NULL);
	return 0;
}
