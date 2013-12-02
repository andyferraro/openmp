#include <stdio.h>
#include <omp.h>
 
int main ()  
{
 int nthreads = 8;
 omp_set_num_threads(nthreads);
 #pragma omp parallel
 {
  printf("Hello World from thread = %d with %d threads\n", omp_get_thread_num(), omp_get_num_threads());
 }
 printf("all done, with hopefully %d threads\n", nthreads);
 return 0;
}

 

