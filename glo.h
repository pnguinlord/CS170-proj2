#ifndef __SEMA_GLO_H__
#define __SEMA_GLO_H__

#ifdef _TABLE
#undef EXTERN
#define EXTERN
#endif

#include <minix/param.h>

/*semaphore global variables*/
extern int nextavailsem; //stores next available semaphore 

/*probably need parameters of the call as external messages*/
