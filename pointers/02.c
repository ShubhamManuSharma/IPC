#include<stdio.h>
#include<stdlib.h>


int main(){
	int *p;    //2*3
	p = (int *)malloc(sizeof(int)*3*3*3);
	if(!p){
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
					*(p+(i+j+k))=(i+j+k);
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				printf("%d ",*(p+i+j+k));
			}
		}
		printf("\n");
	}

}
