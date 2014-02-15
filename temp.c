#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h> 

#define PATH "/home/xbian/temp.sh"
#define REFRESH 60

void writeTemp(int s){
system(PATH);  //path of temp.sh 
}


int main(int argc, char *argv[]){
  
  //handler SIGALRM number 14
  //manejadora para SIGALRM señal 14
    
  struct sigaction ssSIGALRM;
  ssSIGALRM.sa_handler=writeTemp;  
  sigfillset(&ssSIGALRM.sa_mask); 
  ssSIGALRM.sa_flags=0;
  if (-1==sigaction(14,&ssSIGALRM,NULL))
    {perror("Error: sigaction");
      return 1;}
      
   
  //mascaras (mask)
  sigset_t maskAlarm;
  
    //creamos mascara SIGALRM
	//config the SIGALRM mask
  sigfillset(&maskAlarm);
  sigdelset(&maskAlarm,14 ); 
  
  while(0==0){
  alarm(REFRESH);
  sigsuspend(&maskAlarm);  
  }      
      
	return 0;
}

