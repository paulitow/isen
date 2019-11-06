#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

void func()
{

    printf("\nVous tapez Crtl -C\n");
}

int main()
{
    int h,m,a = 0;
    signal(SIGALRM, func);
    printf("A quelle heure voulez vous être reveillé ?\n");
    scanf("%d",&h);
    printf("A quelle minute voulez vous être reveillé ?\n");
    scanf("%d",&m);

    a = fork();
    if (a == 0){
        
    }
}