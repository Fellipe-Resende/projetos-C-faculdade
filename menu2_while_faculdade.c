#include <stdio.h>
#include <math.h>

int main () {
  int opcao = -1 ;

  while (opcao != 0)
  {
    printf("\n");
    printf("---VAMOS FAZER UM SUPER MENU DE EXERCICIOS?0---\n\n\n");
    printf("Escolha um numero de 1 a 8 (ou 0 para sair)\n\n\n");
    printf("Exercicio 1. Exibir o super menu novamente\n");
    printf("Exercicio 2. Contar ate 100\n");
    printf("Exercicio 3. Jamalzinho BOBO\n");
    printf("Exercicio 4. Menor numero armazenado\n");
    printf("Exercicio 5. Multiplicacao com as soma dos fatores\n");
    printf("Exercicio 6. Somatorio\n");
    printf("Exercicio 7. branca de neve e o papagaio\n");
    printf("Exercicio 8. Robo no plano cartesiano\n");
    scanf("%d", &opcao);
    printf("\n\n");

    switch ( opcao )
    {
      
     case 0:
      printf("Saindo do super menu...");
      break;


     case 1: 
      printf("\n");
       break; 


     case 2:{
       int contador = 1;
        while ( (contador > 0 ) && ( contador < 101 ) ) {
       printf("Vamos contar: %d\n ", contador);
        contador++; 
       }
       break; 
       }


     case 3: {
        int n ;
          printf("Escreva quantas vezes a professora chamou atencao de jamal: ");
         scanf("%d", &n);
       while ( n > 0 ) 
          {
          printf("VOU PRESTAR ATENCAO NAS AULAS\n\n");
          n--;
          }
          break;
          }


     case 4: {
           int numero, menor ;
          printf("Digite um numero positivo (ou 0 para sair):  ");
          scanf("%d", &numero);
          menor = numero ;
           while (numero != 0)
           {
           if (numero < menor)
           {
           menor = numero ;
           }
         printf("\nEscreva outro valor positivo (ou 0 para sair):  ");
          scanf("%d", &numero);
           }
          printf(" O MENOR VALOR DIGITADO FOI: %d\n\n ", menor);
         break;
         }


     case 5:{
      int A, B ;
      int resultado = 0 ;
      int contador = 1 ;
     printf("ESCREVA OS VALORES DE A E B:  ");
      scanf("%d %d", &A, &B);
      while ( contador <= B  )
      {
        resultado = resultado + A;
        contador++;
      }
      printf("O resultado da multiplicacao por soma eh: %d\n", resultado) ; 
     break;
     }


     case 6: {
      int N ;
      int i = 1;
      int somatorio = 0;
      printf("Digite um valor positivo para N");
      scanf("%d", &N);
      while ( N < 0 )
      {
        printf("VALOR INVALIDO\n");
        printf("TENTE NOVAMENTE\n");
         scanf("%d", &N);
      }
      while (i <= N)
      {
        somatorio = ( i * i + 2 * i) ;
        i++ ; 
      }
      printf("O RESULTADO DO SOMATORIO E: %d\n", somatorio);
      printf("---------------\n");
       break;
     }  


     case 7: {
      int N = -1;

      printf("--- SIMULADOR DO PAPAGAIO JAJA ---\n");

       // O laço continua enquanto a princesa NÃO falar 10
        while (N != 10) {
        printf("Branca de Neve fala: ");
        scanf("%d", &N);

        // TRATAMENTO DE ERRO: Garante que o número está entre 0 e 10
        while (N < 0 || N > 10) {
            printf("Erro! O Jaja nao entende esse numero. Digite entre 0 e 10.\n");
            printf("Branca de Neve fala: ");
            scanf("%d", &N);
        }

        // Se o número for válido e NÃO for 10, o Jajá repete!
        if (N != 10) {
            printf("Papagaio Jaja repete: %d\n\n", N);
        }
       }

         printf("Fim! O Jaja nao sabe contar ate 10 e ficou quietinho.\n");
         printf("----------------------------------\n");
          break;
       }
     case 8: {
      char comando = ' ';
    int x = 0, y = 0;   

    printf("--- DESAFIO DO ROBO FUJAO ---\n");
    printf("Digite os comandos (N, S, L, O) ou 'F' para parar:\n");

    // 1. Laco de movimentação do robo
    while (comando != 'F') {
        printf("Comando: ");
        scanf(" %c", &comando); 

        switch (comando) {
            case 'N': y++; break;
            case 'S': y--; break;
            case 'L': x++; break;
            case 'O': x--; break;
            case 'F': break; 
            default: 
                printf("Comando invalido! Use N, S, L, O ou F.\n");
        }
    }

    // 2. Exibe a posicao final
    printf("\nPosicao: (%d, %d)\n", x, y);

    // 3. Descobre o quadrante usando if/else 
    if (x == 0 && y == 0) {
        printf("O robo terminou na Origem.\n");
    } 
    else if (x == 0) {
        printf("Sobre o eixo Y\n");
    } 
    else if (y == 0) {
        printf("Sobre o eixo X\n");
    } 
    else if (x > 0 && y > 0) {
        printf("1° Quadrante\n");
    } 
    else if (x < 0 && y > 0) {
        printf("2° Quadrante\n");
    } 
    else if (x < 0 && y < 0) {
        printf("3° Quadrante\n");
    } 
     else if (x > 0 && y < 0) {
        printf("4° Quadrante\n");
          }

        printf("--------------\n"); 
        }
      break;
  
     
     
    
     default:
      printf("OPCAO INVALIDA\n\n\n\n\n\n");
      break;
    }
  }
  return 0;
}