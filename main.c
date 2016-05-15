/*
 * a loop that gets messages requesting work, carries out the work, and sends
 * replies.
 *
 * The entry points into this file are:
 *   main:      main program of Semaphore System
 *   reply:	send a reply to a process after the requested work is done
 *
 */

#include "sema.h"
#include <minix/keymap.h>
#include <minix/callnr.h>
#include <minix/com.h>
#include <minix/ds.h>
#include <minix/type.h>
#include <minix/endpoint.h>
#include <minix/minlib.h>
#include <minix/type.h>
#include <minix/vm.h>
#include <minix/crtso.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <string.h>
#include <machine/archtypes.h>
#include <env.h>
#include "mproc.h"
#include "param.h"
// LOOK OVER THESE INCLUDES TO SEE IF WE NEED TO GET RID OF ANY 
#include "kernel/const.h"
#include "kernel/config.h"
#include "kernel/proc.h"

int main()
{
  nextavailsem=0;
  while(TRUE){
    
  }
  
  

  
}
