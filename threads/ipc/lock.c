#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void* thfunc(void *arg){
	int i = *((int *)arg); 
	pthread_detach(pthread_self());
	printf("%d thid : %ld\n",i,pthread_self());
	pthread_exit(NULL);
}

int main()
{
	pthread_t thid[3];
	for(int i=0; i<3; i++){
		if(pthread_create(&thid[i],NULL,&thfunc,(void *)&i))
			printf("thread crete fail\n");
		else
			printf("thread crete success : %ld\n",pthread_self());

		pthread_join(thid[i],NULL);
	}
	pthread_exit(NULL);
return 0;
}
