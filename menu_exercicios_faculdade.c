 #include <stdio.h>
 #include<math.h>

 int main() {
      int opcao;

     printf("- SUPER MENU DE EXERCICIOS, AP1 -\n");
     printf("1 exercicio. Exibir Menu Novamente\n");
     printf("2 exercicio. Pergunta Idade\n");
     printf("3 exercicio. Converter para Hexadecimal\n");
     printf("4 exercicio. Tamanho dos Tipos (sizeof)\n");
     printf("5 exercicio. Qual a diferença entre os comandos: ++a e a++\n");
     printf("6 exercicio. Verifica numero impar ou par\n");
     printf("7 exercicio. Calculadora de distancia entre pontos\n");
     printf("8 exercicio. Banco sistema\n");
     printf("9 exercicio. Numero de 3 algarismos que vira 4\n");
     printf("10 exercicio. Verificacao de maior, menor e par, condicoes\n");
     printf("11 exercicio. Calculo de raizes de 2 grau\n");
     printf("Escolha uma opcao (1-11):");
    
     scanf("%d", &opcao);

     switch (opcao) {
         case 1: {
            printf("Voce escolheu o exercicio 1\n");
            printf("esse e literalmente o exercicio 1 KKKKKKKKKK");
            break;
         }

         case 2: {
            printf("Ola, qual sua idade?\n");
            int idade;
            scanf("%d", &idade);
            printf("Que Legal! voce tem %d anos, que bacana!\n", idade);
            break; 
         }

         case 3: {
            int decimal;
            printf("escreva um numero decimal\n");
            scanf("%d", &decimal);
            printf("Em Hexadecimal: %X\n", decimal);
            break;
         }

         case 4: {
            printf("--- Tamanho dos Tipos Basicos ---\n");
            printf("char: %zu byte(s)\n", sizeof(char));
            printf("int: %zu byte(s)\n", sizeof(int));
            printf("float: %zu byte(s)\n", sizeof(float));
            printf("double: %zu byte(s)\n", sizeof(double));
            break;
         }

         case 5: {
            printf("Diferenca de a++ e ++a\n");
            int a = 10, b = 11;
            printf("USANDO A++: %d (depois vira %d)\n", a++, a);
            printf("USANDO ++B: %d\n", ++b);
            break;
         }

    
    
         case 6: {     
            printf("Digite um numero\n");
            int numero ;
            scanf("%d", &numero);
            //uso do operador 
            ( numero % 2 == 0) ? printf("seu numero e par\n") : printf("seu numero e impar\n");
            break;
         }

         case 7: {
           printf("Escreva as coordenadas x e y de dois lugares, para calcular a distancia.\n");
           printf("Escreva x1 e y1 de um ponto.\n");
           int xum, yum;
           scanf("%d %d", &xum, &yum);
           printf("Agora escreva as coordenadas do 2 ponto, x2 e y2.\n");
           int xdois, ydois;
           scanf("%d %d", &xdois, &ydois);


           //calculo da distancia entre os pontoss
           float distancia;
           distancia = sqrt(pow(xdois - xum, 2) + pow(ydois - yum, 2));
           printf("a distancia desses pontos e: " "%f\n" , distancia );
           break;
         }
        
         case 8: {  
         int escolhaBanco; 
         float saldo = 1000.00;

           printf(">MENU DE OPERACOES BANCARIAS<\n\n");
            printf("1 - Consultar saldo\n2 - Saque\n3 - Deposito\n4 - Sair\n");
           scanf("%d", &escolhaBanco);

            switch (escolhaBanco) { 
            case 1:
            printf("Saldo: %.2f\n", saldo);
            break;

            case 2: {
            float saque;
            printf("Valor: ");
            scanf("%f", &saque);
            if (saque <= saldo) {
                saldo -= saque;
                printf("Sacado! Restante: %.2f\n", saldo);
            } 
            else {
                printf("Indisponivel\n");
            }
            break;
           }

           case 3: {
            printf("DIGITE o valor a ser depositado\n");
           float deposito;
           scanf("%f", &deposito);
            printf("O Valor disponivel na sua conta agr e: %.2f\n", saldo + deposito);
            break;
             }
                    
            case 4:{
            printf("Saindo...\n");
            break;
            }
            
             }
             break;
              } 

            case 9: {
               printf("Escreva um numero de 3 algarismos: \n");
               int no, n1, n2, n3, resultado, n4, resultadofinal;
               scanf("%d", &no);

               //Isolar os algarismos, calculo
              n1 = no/100 ;
              n2 = ( no % 100 ) / 10;
              n3 = ( no % 10 );

             // montagem do numero de 4 algarismos
             resultado =  n1 + ( n2 * 3 ) + ( n3 * 5 ); 
             n4 = resultado % 7;


             // montagem do numero de 4 algarismos
             resultadofinal = (no * 10) + n4;
             printf("Seu numero montado com 4 algarismo é : %d\n ", resultadofinal);
             break;
             }
             
            case 10: {
                    printf("por favor digite dois numeros inteiros\n");
                    int n1, n2;
                     scanf("%d", &n1);
                   scanf("%d", &n2);
 
                  //Condições
                 if (n1 > n2) {
                if (n1 % 2 == 0 && n1 % n2 == 0) {
                 int subtracao = n1 - n2 ;
                  printf( "a subtracao dos dois nuemros e: %d\n ", subtracao) ;
                 } 
                 else{ 
               printf( "o prieiro numero e maior mas nao cumpre com os outros requisitos\n" ) ;
               }
                }
  
             else {
             printf("a SOMA dos dois numeros digitados e: %d\n", n1 + n2) ;
             }  
             break; 
            }
            
            case 11: {
               printf("VAMOS CALCULAR AS RAIZES DA EQUAÇÃO DE 2 GRAU!\n");
               printf("Por Favor, digite os valores de A, B e C: \n");
               float A, B, C, delta, x1, x2 ;
               scanf ("%f %f %f", &A, &B, &C) ;

               if ( A == 0) {
                  printf("Nao e possivel se a for 0");
               }

               else {
                  printf("VAMOS CALCULAR O DELTA\n\n");

                  delta = pow(B, 2) - (4 * A * C);
                  

                  //passo 4

                  if ( delta > 0 ) {
                 
                  x1 = (-B + sqrt(delta)) / (2 * A);
                  x2 = (-B - sqrt(delta)) / (2 * A);
                  printf("A equacao possui duas raizes reais: x1 = %.2f e x2 = %.2f\n\n", x1, x2);
            }
                //passo 5
                else if ( delta == 0 ) {
                  x1 = -B / (2 * A);
                  printf("A equacao possui uma raiz real: x1 = %.2f\n\n", x1);
                }
                 
                //passo 6
                else {
                printf ("A EQUACAO NAO POSSUI RAIZES REAIS\n\n");
                }
            
               }
           
               //passo 7
               for (int i = 1; i <= 5; i++) {
               printf("Encerrando o algoritimo.... %d\n", i );
               }
              break;
             }
         
              default:
              printf("opcao invalida\n");
              break;
             } 
        

    
   
    return 0;
} 