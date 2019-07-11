#include<stdio.h>
#include<stdlib.h>


int main(){
	int *p;    //2*3
	p = (int *)malloc(sizeof(int)*3*3);
	if(!p){
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(((i+j)%2) == 0)
				*(p+(i*j))=1;
			else
				*(p+(i*j))=0;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",*(p+i+j));
		}
		printf("\n");
	}

}
