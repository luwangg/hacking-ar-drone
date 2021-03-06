#include <stdio.h>   /* Standard input/output definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <pthread.h>
#include <ctype.h>    /* For tolower() function */
#include <math.h>

#include "../util/type.h"
#include "../util/util.h"
#include "mot.h"


int main()
{
  printf("Motor 2 on at 20% for 5 seconds.\r\n");
	
  mot_Init();

  float throttle = .2;

  mot_Run(0,throttle,0,0);

  sleeper(5);
 
  mot_Close();

  printf("\nDone...\n");
  return 0;
}
