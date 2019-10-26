#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(void){
    int p, p2;
    printf("Yo soy papounet ! mon PID : %d\n",getpid());
    p = fork();
    if (p == 0){
        printf("PAPAAAA ! yo soy tu hijo ! PID : %d\n", getpid());
        printf("El PID de mi papa es : %d\n", getppid());
        p2 = fork();
        if (p2 ==0){
        printf("Yo Soy Pablito s! PID : %d\n", getpid());
        printf("El PID de mi papa es : %d\n", getppid());
        }
    }
}
