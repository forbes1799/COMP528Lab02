#include <stdio.h>
#include <omp.h>

int main(int argc, char const* argv[]){
    
    int nthreads, thread_id;
    nthreads = omp_get_num_threads();
    thread_id = omp_get_thread_num();
    
    if(nthreads > 1 && thread_id == 0) printf("Goodbye slow serial world and Hello OpenMP!\n");
    
    printf("I have %d thread(s) and my thread id is %d\n", nthreads, thread_id);
    return 0;
}

