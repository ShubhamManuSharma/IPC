#include<stdio.h>
#include<sys/time.h>

int main(){

	struct timeval start,end;
	if(gettimeofday(&start, NULL)==0)
		printf("get time success\n");
	for (int i=0;i<100;i++){}
	if(gettimeofday(&end, NULL)==0)
		printf("get time success\n");


	printf("start : %ld + %ld = %ld\n", start.tv_sec,start.tv_usec,(start.tv_sec * 1000000 + start.tv_usec));
	printf("end   : %ld + %ld = %ld\n", end.tv_sec,end.tv_usec, (end.tv_sec * 1000000 + end.tv_usec));

	printf("%ld\n", ((end.tv_sec * 1000000 + end.tv_usec)
		  - (start.tv_sec * 1000000 + start.tv_usec)));

return 0;
}
