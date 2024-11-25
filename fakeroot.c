
//para usar recuersos e funciones de glibc

//trabalhando com chamadas de sistemas e bibliotecas
#define _GNU_SOURCE


#include<stdio.h>

//bibloteca para a chamada de sistema
#include<sys/types.h>

//bilotecas para trabalhar com arquivos de manipulacao de forma dinamica
#include<dlfcn.h>

//tbm para chamadas de sistema e gerando permissoes para o processo

#include<unistd.h> 


//funcao para simular o root do sistema operacional

uid_t getuid(void){
    return 0;
}

gid_t getgid(void){
    return 0;
}




