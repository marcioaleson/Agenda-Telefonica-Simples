#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MaxCont 1000 //N�mero m�ximo de contatos.

int main()
{
    typedef struct {   //Cria a estrutura "contato".
        char nome[50];
        char telefone[50];
    }contato;

    FILE *telefonica;
    char op, op2, op3, confirmar, letra_sem_acento;
    int i, j, troca, n_contatos;
    contato *pessoa, *sem_acento;
    contato gente, apagar;
    system("color 1F");

    while(1)
    {
         system("cls");
         confirmar = 'N';
         puts("Agenda Telef�nica v2.0 por Seathus.");
         printf("\n[1] Procurar contato\n[2] Adicionar Contato\n[3] Remover Contatos\n[4] Sair\n\nDigite a op��o desejada: -> ");
         fflush(stdin);
         scanf("%c", &op);
         switch(op)
         {
              case '1': telefonica = fopen("contatos.txt", "r");
                        gente.nome[0]='\0';
                        printf("Digite a letra inicial do nome e aperte <ENTER> (Deixe em branco para mostrar todos) -> ");
                        fflush(stdin);
                        scanf("%c", &op3);
                        printf("\n");
                        if(op3==' ' || op3=='\n')
                            while(!feof(telefonica))
                            {
                                fscanf(telefonica, "%s", &gente.nome);
                                for(i=0;gente.nome[i]!='\0';i++)
                                    if(gente.nome[i]=='_') //Os nomes s�o gravados com o caractere _ fazendo papel de espa�o em branco. Aqui o programa l� os contatos e retira os _ para que eles sejam exibidos corretamente.
                                            gente.nome[i]=' ';
                                fscanf(telefonica, "%s", &gente.telefone);
                                for(i=0;gente.telefone[i]!='\0';i++)
                                    if(gente.telefone[i]=='_')
                                            gente.telefone[i]=' ';
                                if(gente.nome[0]=='\0')
                                    printf("Sua agenda est� vazia.\n");
                                else
                                    printf("%s  -  %s\n", gente.nome, gente.telefone);
                            }
                        else
                            while(!feof(telefonica))
                            {
                                fscanf(telefonica, "%s", &gente.nome);
                                for(i=0;gente.nome[i]!='\0';i++)
                                    if(gente.nome[i]=='_')
                                            gente.nome[i]=' ';
                                fscanf(telefonica, "%s", &gente.telefone);
                                for(i=0;gente.telefone[i]!='\0';i++)
                                    if(gente.telefone[i]=='_')
                                            gente.telefone[i]=' ';
                                if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�') //Desacentua a letra inicial do contato para compar�-la com a com letra digitada pelo usu�rio.
                                    {
                                        if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�')
                                            letra_sem_acento = 'a';
                                        else
                                            {
                                                if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�')
                                                    letra_sem_acento = 'e';
                                                else
                                                    {
                                                        if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�')
                                                            letra_sem_acento = 'i';
                                                        else
                                                            {
                                                                if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�')
                                                                    letra_sem_acento = 'o';
                                                                else
                                                                    {
                                                                        if(gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�'||gente.nome[0]=='�')
                                                                            letra_sem_acento = 'u';
                                                                    }
                                                            }
                                                    }
                                            }
                                    }
                            else
                                letra_sem_acento = gente.nome[0];
                            if(toupper(letra_sem_acento)==toupper(op3)) //compara a primeira letra de cada contato com a letra digitada pelo usu�rio.
                                printf("%s  -  %s\n", gente.nome, gente.telefone);
                        }
                        fclose(telefonica);
                        printf("\n");
                        system("PAUSE");
                        break;

              case '2': telefonica = fopen("contatos.txt", "r");
                        n_contatos = 0;
                        while(!feof(telefonica))
                            {
                                fscanf(telefonica, "%s", &gente.nome);
                                fscanf(telefonica, "%s", &gente.telefone);
                                n_contatos++; //conta o n�mero de contatos existentes na agenda
                            }
                        fclose(telefonica);
                        if(n_contatos<MaxCont) //No menu principal, verifica se o n�mero m�ximo de contatos n�o foi atingido.
                        {
                            telefonica = fopen("contatos.txt", "a");
                            do{
                                puts("\nNovo contato");
                                printf("Nome do novo contato: ");
                                fflush(stdin);
                                gets(gente.nome);
                                for(i=0;gente.nome[i]!='\0';i++)
                                        if(gente.nome[i]==' ') //Na hora de armazenar os contatos digitados pelo usu�rio, todos os espa�os em branco ser�o substituidos por caracteres _
                                                gente.nome[i]='_';
                                printf("Telefones do novo contato: ");
                                gets(gente.telefone);
                                for(i=0;gente.telefone[i]!='\0';i++)
                                        if(gente.telefone[i]==' ')
                                                gente.telefone[i]='_';
                                fprintf(telefonica, "\n%s %s", gente.nome, gente.telefone);
                                n_contatos++;
                                printf("Deseja adicionar mais contatos? (S/N) -> ");
                                fflush(stdin);
                                scanf("%c", &op2);
                                if((toupper(op2)=='S')&&!(n_contatos<MaxCont+1)) //No momento em que os contatos est�o sendo adicionados, verifica se o n�mero m�ximo de contatos n�o foi atingido.
                                {
                                    printf("\nSua agenda est� cheia, n�o ser� poss�vel adicionar mais contatos.\n");
                                    op2='N';
                                    system("PAUSE");
                                }
                            }while(toupper(op2)=='S');
                        }
                        else
                            {
                                printf("Sua agenda est� cheia, n�o ser� poss�vel adicionar mais contatos.\n");
                                system("PAUSE");
                            }
                        n_contatos=0;
                        fclose(telefonica);
                        telefonica = fopen("contatos.txt", "r"); //A partir daqui e at� o "case 3", o c�digo � utilizado para organizar os contatos em ordem alfab�tica.
                        while(!feof(telefonica))
                            {
                                fscanf(telefonica, "%s", &gente.nome);
                                fscanf(telefonica, "%s", &gente.telefone);
                                n_contatos++;
                            }
                        rewind(telefonica);
                        pessoa = (contato *)calloc(n_contatos, sizeof(contato)); // Aloca mem�ria dinamicamente para armazenar o conte�do do arquivo-texto "contatos.txt".
                        sem_acento = (contato *)calloc(n_contatos, sizeof(contato)); //Aloca mem�ria dinamicamente para armazenar todos os contatos, sem acentua��o.
                        for(i=0;i < n_contatos;i++)
                            {
                                fscanf(telefonica, "%s", &pessoa[i].nome);
                                for(j = 0; pessoa[i].nome[j]!='\0'; j++) ////Criando uma c�pia de todos os contatos, mas sem acento.
                                    {
                                        if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                            {
                                                if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                    sem_acento[i].nome[j] = 'a';
                                                else
                                                    {
                                                        if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                            sem_acento[i].nome[j] = 'e';
                                                        else
                                                            {
                                                                if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                    sem_acento[i].nome[j] = 'i';
                                                                else
                                                                    {
                                                                        if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                            sem_acento[i].nome[j] = 'o';
                                                                        else
                                                                            {
                                                                                if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                    sem_acento[i].nome[j] = 'u';
                                                                                else
                                                                                    {
                                                                                        if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                            sem_acento[i].nome[j] = 'c';
                                                                                        else
                                                                                            {
                                                                                                if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                                    sem_acento[i].nome[j] = 'n';
                                                                                            }
                                                                                    }
                                                                            }
                                                                    }
                                                            }
                                                    }
                                            }
                                        else
                                            sem_acento[i].nome[j] = pessoa[i].nome[j];
                                    }
                                fscanf(telefonica, "%s", &pessoa[i].telefone);
                            }
                        troca=1;
                        while(troca!=0)
                            {
                                troca=0;
                                for(i=0;i<n_contatos-1;i++)
                                    {
                                        j=0;
                                        if(toupper(sem_acento[i].nome[j])>toupper(sem_acento[i+1].nome[j]))//Se a primeira letra do nome[i] for maior que a primeira letra do nome seguinte, troca.
                                            {
                                                strcpy(gente.nome,pessoa[i].nome);  //Utiliza a estrat�gia Bubble sort para reorganizar os contatos.
                                                strcpy(gente.telefone,pessoa[i].telefone);
                                                strcpy(pessoa[i].nome,pessoa[i+1].nome);
                                                strcpy(pessoa[i].telefone,pessoa[i+1].telefone);
                                                strcpy(pessoa[i+1].nome,gente.nome);
                                                strcpy(pessoa[i+1].telefone,gente.telefone);
                                                strcpy(gente.nome,sem_acento[i].nome);
                                                strcpy(sem_acento[i].nome,sem_acento[i+1].nome);
                                                strcpy(sem_acento[i+1].nome,gente.nome);
                                                troca++;
                                            }
                                        else
                                            while(toupper(sem_acento[i].nome[j])==toupper(sem_acento[i+1].nome[j]))
                                                {
                                                    j++;
                                                    if(toupper(sem_acento[i].nome[j])>toupper(sem_acento[i+1].nome[j]))
                                                        {
                                                            strcpy(gente.nome,pessoa[i].nome);
                                                            strcpy(gente.telefone,pessoa[i].telefone);
                                                            strcpy(pessoa[i].nome,pessoa[i+1].nome);
                                                            strcpy(pessoa[i].telefone,pessoa[i+1].telefone);
                                                            strcpy(pessoa[i+1].nome,gente.nome);
                                                            strcpy(pessoa[i+1].telefone,gente.telefone);
                                                            strcpy(gente.nome,sem_acento[i].nome);
                                                            strcpy(sem_acento[i].nome,sem_acento[i+1].nome);
                                                            strcpy(sem_acento[i+1].nome,gente.nome);
                                                            troca++;
                                                        }
                                                }
                                    }
                            }
                        fclose(telefonica);
                        telefonica = fopen("contatos.txt", "w");
                        for(i = 0;i < n_contatos; i++)
                            fprintf(telefonica, "\n%s %s", pessoa[i].nome, pessoa[i].telefone);
                        fclose(telefonica);
                        free(pessoa);
                        free(sem_acento);
                        break;

              case '3': n_contatos=0;
                        apagar.nome[0]='\0';
                        printf("Digite o nome do contato que deseja apagar e aperte <ENTER> (Deixe em branco para apagar todos) -> ");
                        fflush(stdin);
                        gets(apagar.nome);
                        printf("\n");
                        if(apagar.nome[0]==' ' || apagar.nome[0]=='\n' || apagar.nome[0]=='\0') //Se nada foi digitado, pede a confirma��o do usu�rio para remover todos os contatos.
                        {
                            printf("Tem certeza que deseja limpar sua lista de contatos? (S/N) -> ");
                            fflush(stdin);
                            scanf("%c", &confirmar);
                            if(toupper(confirmar)=='S')
                            {
                                telefonica = fopen("contatos.txt", "w");
                                gente.nome[0]='\0';
                                gente.telefone[0]='\0';
                                puts("Pronto, seus contatos foram removidos!");
                                fclose(telefonica);
                            }
                        }
                        else
                        {
                            for(i=0;apagar.nome[i]!='\0';i++)
                                {
                                    if(apagar.nome[i]==' ')
                                        apagar.nome[i]='_';
                                    else
                                    {
                                        if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�') //Desacentuando o contato que o usu�rio deseja remover da agenda.
                                                {
                                                    if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                        apagar.nome[i] = 'a';
                                                    else
                                                       {
                                                            if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                apagar.nome[i] = 'e';
                                                            else
                                                                {
                                                                    if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                        apagar.nome[i] = 'i';
                                                                    else
                                                                        {
                                                                            if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                                apagar.nome[i] = 'o';
                                                                            else
                                                                                {
                                                                                    if(apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                                        apagar.nome[i] = 'u';
                                                                                    else
                                                                                        {
                                                                                            if(apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                                                apagar.nome[i] = 'c';
                                                                                            else
                                                                                                if(apagar.nome[i]=='�'||apagar.nome[i]=='�')
                                                                                                    apagar.nome[i] = 'n';
                                                                                        }
                                                                                }
                                                                        }
                                                                }
                                                       }
                                                }
                                        else
                                            apagar.nome[i] = tolower(apagar.nome[i]);
                                    }
                                }
                            telefonica = fopen("contatos.txt", "r");
                            while(!feof(telefonica))
                            {
                                fscanf(telefonica, "%s", &gente.nome);
                                fscanf(telefonica, "%s", &gente.telefone);
                                n_contatos++;
                            }
                            rewind(telefonica);
                            pessoa = (contato *)calloc(n_contatos, sizeof(contato)); // Aloca mem�ria dinamicamente para armazenar o conte�do do arquivo-texto "contatos.txt".
                            sem_acento = (contato *)calloc(n_contatos, sizeof(contato)); //Aloca mem�ria dinamicamente para armazenar todos os contatos, sem acentua��o.
                            for(i=0;i < n_contatos;i++)
                               {
                                  fscanf(telefonica, "%s", &pessoa[i].nome);
                                    for(j = 0; pessoa[i].nome[j]!='\0'; j++) //Criando uma c�pia de todos os contatos, mas sem acento.
                                        {
                                            if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                {
                                                    if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                        sem_acento[i].nome[j] = 'a';
                                                    else
                                                       {
                                                            if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                sem_acento[i].nome[j] = 'e';
                                                            else
                                                                {
                                                                    if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                        sem_acento[i].nome[j] = 'i';
                                                                    else
                                                                        {
                                                                            if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                sem_acento[i].nome[j] = 'o';
                                                                            else
                                                                                {
                                                                                    if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                        sem_acento[i].nome[j] = 'u';
                                                                                    else
                                                                                        {
                                                                                            if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                                sem_acento[i].nome[j] = 'c';
                                                                                            else
                                                                                                {
                                                                                                    if(pessoa[i].nome[j]=='�'||pessoa[i].nome[j]=='�')
                                                                                                        sem_acento[i].nome[j] = 'n';
                                                                                                }
                                                                                        }
                                                                                }
                                                                        }
                                                                }
                                                        }
                                                }
                                            else
                                                sem_acento[i].nome[j] = tolower(pessoa[i].nome[j]); //Transformando todas as letras n�o acentuadas em min�sculas. Repare que no c�digo acima, as letras acentuadas s�o substitu�das por letras sem acento min�sculas.
                                        }
                                    fscanf(telefonica, "%s", &pessoa[i].telefone);
                                }
                            fclose(telefonica);
                            telefonica = fopen("contatos.txt", "w");
                            for(i = 0;i < n_contatos; i++)
                                {
                                    if(strcmp(sem_acento[i].nome,apagar.nome)) //Compara o nome do contato lido com o nome a ser apagado, caso n�o sejam iguais, envia o nome e o telefone para o arquivo-texto.
                                        fprintf(telefonica, "\n%s %s", pessoa[i].nome, pessoa[i].telefone);
                                }
                            puts("Os contatos selecionados foram apagados!");
                            fclose(telefonica);
                            free(pessoa);
                            free(sem_acento);
                        }
                        system("PAUSE");
                        break;
              case '4': exit(0);
              default:  puts("Op��o Inv�lida!!");
                        system("PAUSE");
         }
    }
}
