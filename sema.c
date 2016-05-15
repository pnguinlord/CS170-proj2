/* This file deals with the semaphore implementation. Entry points: 
 *      sema_init: initializes semaphore, returns the next available semaphore. 
 *      sema_down: equivalent to p(). returns EINVAL error if uninitialized semaphore. When the counter has a value of <0, calling process should be put to sleep. (waiting in queue that corresponds to the correct semaphore). On success, return 0
 *      sema_up: equivalent to v(). Can only be called for initialized semaphore. Returns EINVAL otherwise. increment counter of semaphore. When there is at least one process waiting in Q, first process that was put to sleep should be woken. Return 0 on success
 *      sema_release: create SEM_RELEASE message that is sent to semaphore service. Can only be invoked on active semaphore. Return EINVAL otherwise. Release active semaphore, put back into inactive state. Fail with EINUSE if processes exist that are waiting in the Q
 */
#include "sema.h"
#include <string.h>
#include<minix/com.h>
#include "mproc.h"
#include "param.h"
/*===========================================================================*
 *				sem_init				     *
 *===========================================================================*/


int sem_init(int start_value){
  // if the next available semaphore isnt out of bounds:  
  //call the SEM INIT message using the start_value as the initial value of the next semaphore
  //return next avail sem+1
}

/*===========================================================================*
 *				sem_down				     *
 *===========================================================================*/
int sem_down(int semaphore_number){
  //if semaphore_number value>=0
  //decrement that semaphore. if counter==0, sleep in queue. create SEM_DOWN message
  //return 0
  //else return EINVAL
}

/*===========================================================================*
 *				sem_up				     *
 *===========================================================================*/
int sem_up(int semaphore_number){
  //if semaphore_number>=0
  //increment that semaphore. Create SEM_UP message. if there are sleeping processes in the queue, wake up the oldest one.
  //return 0
  //else return EINVAL
}

/*===========================================================================*
 *				sem_release				     *
 *===========================================================================*/
int sem_release(int semaphore){//create SEM_RELEASE message
  //if semaphore->value <0 return EINVAL
  
  //if semaphore->queue->quantity>0 return EINUSE
  //set semaphore->value= -1
  //return 0 
}
