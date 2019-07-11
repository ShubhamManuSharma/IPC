// gcc -fopenmp -o go go.c
// ./go

#include <stdio.h>
#include <omp.h>
#include <time.h>
int main(int argc, char **argv)
{
  int i, thread_id, nloops;
 clock_t start;

#pragma omp parallel private(thread_id, start)
  {
    nloops = 0;

#pragma omp for
    for (i=0; i<3; ++i)
      {
        ++nloops;
	start = clock();
        printf("Thread %d performed %d iterations of the loop. %ld\n",
           thread_id, nloops,start);
      }

    thread_id = omp_get_thread_num();

    printf("Thread %d performed %d iterations of the loop. %ld\n",
           thread_id, nloops,start);
  }
while(1){}
  return 0;
}
