/* sync by mutex */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>

pthread_mutex_t mlock;
int a;
void *print(void *arg)
{
	int num = *((int *)arg);
	pthread_mutex_lock(&mlock);
	printf("%d : %d : %ld \n",a,num,pthread_self());
	a++;
	pthread_mutex_unlock(&mlock);
}

int main()
{
	pthread_t th_id;
	int i=0;
	while(i<20){
		if(pthread_create(&th_id,NULL,&print,(void*)&i))
			exit(EXIT_FAILURE);
		i++;
	}
	pthread_exit(NULL);
	return 0;
}
