#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main(){
    int pid = fork();
    int pidHijoTermino;
    if(pid == 0){
        // Proceso hijo
        printf("Soy el proceso hijo\n");
    } else{
        
        printf("Soy el proceso padre y mi hijo es %d\n", pid);
        // pidHijoTermino = wait(NULL);
        while(1) {
            printf("Trabajando \n");
            sleep(1);
        }
        printf("Mi hijo termino %d \n", pidHijoTermino);
    }
    printf("Terminando\n");
    return 0;
}