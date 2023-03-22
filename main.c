#include <stdio.h>

int main(void) {
  /*6. Construa um programa que receba o código de vários produtos e os classifique de acordo com a tabela:
      CÓDIGO CLASSIFICAÇÃO
      1 Alimento não-perecível
      2 a 4 Alimento perecível
      5 e 6 Vestuário
      7 Higiene pessoal
      8 a 15 Limpeza e utensílios domésticos

--> Qualquer outro código inválido exibe uma mensagem ao usuário.
--> O código deverá ser armazenado em um vetor.
--> Quando o usuário digitar 0 (zero) o programa finaliza e exibe o número total de produtos classificados em cada categoria.*/
  
//Entrada: código de vários produtos
  int codigo[1000]; //O código deverá ser armazenado em um vetor. 
  //O tamanho do vetor é fixo.
  int i=0; // a cada repetição o valor do i troca
  int nperecivel=0; //Alimento não-perecível
  int perecivel=0; //Alimento perecível
  int vestuario=0; //Vestuário
  int higiene=0; //Higiene pessoal
  int limpeza=0; //Limpeza e utensílios domésticos

  //Tabela
  printf(" ------------------------------------------------------\n");
  printf("|     CÓDIGO     |             CLASSIFICAÇÃO           |\n");
  printf("|------------------------------------------------------|\n");
  printf("|       1        |         Alimento não-perecível      |\n");
  printf("|------------------------------------------------------|\n");
  printf("|     2 a 4      |           Alimento perecível        |\n");
  printf("|------------------------------------------------------|\n");
  printf("|     5 e 6      |               Vestuário             |\n");
  printf("|------------------------------------------------------|\n");
  printf("|       7        |            Higiene pessoal          |\n");
  printf("|------------------------------------------------------|\n");
  printf("|     8 a 15     |    Limpeza e utensílios domésticos  |\n");
  printf(" ------------------------------------------------------\n");

  //Entrada de informações
  /*While --> primeiro faz o teste dentro do parênteses, se verdadeiro vai realizar o bloco
  Do{}while --> faz oteste do bloco, e condição sendo verdadeira, realiza o bloco novamente.*/
  printf("\nPara mostrar total de produtos, digite 0.\n");
  do{
  // 1º Leitura
    printf("informe o código: ");
    scanf("%d", &codigo[i]);
  //2º Comparação
    if(codigo[i]==1)
      nperecivel++;
    else
      if(codigo[i]>=2 && codigo[i]<=4)
        perecivel++;
      else
        if(codigo[i]==5 || codigo[i]==6)
          vestuario++;
        else
          if(codigo[i]==7)
            higiene++;
          else
            if(codigo[i]>=8 && codigo[i] <=15)
              limpeza++;
            else
              if (codigo[i]==0)
                printf(" ");
              else
                printf("Código inválido!");

     i++; /*Soma mais uma posição para o i*/
  } while(codigo[i-1]!=0); //fim repetição
  /*[i-1] --> Para comparar o valor anterior do i, caso verdadeiro repete o bloco*/
  /*para olhar para proxima [i+1]*/
  /*para olhar para anterior [i-1]*/
  
//Saída: classificação dos produtos
  printf("\n\nTotal de produtos:");
  printf("\nAlimento não-perecível: %d", nperecivel);
  printf("\nAlimento perecível: %d", perecivel);
  printf("\nVestuário: %d", vestuario);
  printf("\nHigiene pessoal: %d", higiene);
  printf("\nLimpeza e utensílios domésticos: %d", limpeza);
  
  //Exibir os valores do vetor:
  printf("\n\n\nValores do vetor: ");
  /*printf("\nExiste o valor 5?");*/
  for(int j=0; j<=i-2; j++)
    /*i-2 --> é última posição do i*/
    printf("\nValor na posição %d: %d",j, codigo[j]);

    /*if(codigo[j]==5) // Procura o valor: 5
      printf("\nEncontrou o 5!");*/
}