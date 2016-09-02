#include <stdio.h>

int main (){

    FILE *p;
    char *nome_arquivo = "teste.txt";
    char ch;
    int i;
    if((p = fopen(nome_arquivo,"r+w")) == NULL){
        printf("Erro ao abrir o arquivo");


    }else{
        for(i=0 ; i < 100 ; i++){
          if(i % 3 == 0)
             fprintf(p,"\r\n");
          fprintf(p,"%d\t",i);
        }
        rewind(p);
        //Leitura do arquivo
        while (feof(p) == 0) {
            ch = fgetc(p);
            putchar(ch);
        }



        fclose(p);

    }

    getche();

    return 0;

}
