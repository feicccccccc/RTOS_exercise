/**
 *	Minimal Real Time Operating System Exercise
 *	Credit: http://www.state-machine.com/
**/

#ifndef __MIROS_H__
#define __MIROS_H__

#include <stdint.h>

/* Thread Control Block (TCB) */
typedef struct {
    void *sp; /* stack pointer */
	
} OSThread;

/* OSThreadHandler is a pointer to void function */
typedef void (*OSThreadHandler)();

void OS_init(void);

/* this function must be called with interrupts DISABLED */ 
void OS_sched(void);

void OSThread_start(
    OSThread *me,
    OSThreadHandler threadHandler,
    void *stkSto, uint32_t stkSize);

#endif
