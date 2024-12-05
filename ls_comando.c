#include<dirent.h>
#include<stdio.h>
#include<stdlib.h>

/*
um comando no terminal que gera uma lista de arquivos, com o comando ls 

*/
int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *dirp;
   
    //define o argumento foi passado 
    if(argc!=2){
        printf("uso ls nome do diretorio\n", argv[0]);
        return 1;
        //tenta abrir o diretorio 
    }if((dp = opendir(argv[1]))==NULL){
        printf("nao foi possivel abrir o diretorio %s\n", argv[1]);
        return 1;
    //faz a leitura dos arquivop no diretorio
    }while((dirp = readdir(dp))!=NULL){
        //nao podemos trocar pois o readdir retorna um ponteiro para a estrutura dirent 
        //fora que d_name pertence a bibloteca dirent.h
        printf("%s\n", dirp->d_name);    
    }
    closedir(dp);
    

    return 0;
 }
