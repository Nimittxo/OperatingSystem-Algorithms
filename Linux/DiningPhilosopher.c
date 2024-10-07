// This is a code of Dining philosophr Problem: 

/* Done by Nimitt Sharma RA2311026010798 3:05 PM. 25th September 2024 */


/* Dining Philopher problem is a classic synchorniation problem in computer science that illustrates the challnges of resource sharing amoung concurrent processors It involves a scenario where five philosophers are sitting around a circular dining table. They alternate between thinking and eating. However, to eat, each philosopher needs two forks/Chopsticks (resources), one on their left and one on their right. The challenge lies in ensuring that philosophers do not starve and that they avoid deadlock while sharing these limited resources.*/

/* Problem Desciption: 
-> Philosopher represented as processes or threads that alternte b/w thinking and Eating
-> Chopsticks Shared resources that philosophers must acquire to eat. Each Philosopher needs t acquire the Chopstick on their left and on their right
-> Constraints philosophers cannot eat if neiher of the two chopsticks are unavailable and If they pick up one Chopstick they should wait for the another one */

/*We can solve the Dining Philosophers problem using two synchronization mechanisms: Monitors and Semaphores. Let's explore both approaches.*/


// Monitor Implementation in C
// We can Use It by implemening "pthread"

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_PHILOSOPHERS 5

typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int is_taken;
} Fork;

typedef struct {
    int id;
    Fork* left_fork;
    Fork* right_fork;
} Philosopher;

Fork forks[NUM_PHILOSOPHERS];

void init_fork(){
    for (int i=0; i < NUM_PHILOSOPHERS; i++) {
        pthread_mutex_init(&forks[i].mutex, NULL);
        pthread_cond_init(&forks[i].cond,NULL);
        forks[i].is_taken = 0;
        }
}

int main(){
    return 0;
}
    

